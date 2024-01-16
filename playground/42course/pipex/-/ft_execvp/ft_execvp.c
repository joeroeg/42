#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/wait.h>
#include <sys/types.h>

const char* find_path_env(char* const envp[]) {
    for (int i = 0; envp[i] != NULL; i++) {
        if (strncmp(envp[i], "PATH=", 5) == 0) {
            return envp[i] + 5;  // Skip the "PATH=" part
        }
    }
    return NULL;  // Return NULL if PATH is not found
}

char** tokenize_path(const char* path) {
    int count = 1; // Start with 1 for the first token
    for (int i = 0; path[i] != '\0'; i++) {
        if (path[i] == ':') {
            count++;
        }
    }

    // Allocate memory for array of strings
    char** dirs = malloc((count + 1) * sizeof(char*)); // +1 for NULL terminator
    if (dirs == NULL) {
        perror("malloc");
        return NULL;
    }

    // Duplicate the path to avoid modifying the original string
    char* path_dup = strdup(path);
    if (path_dup == NULL) {
        free(dirs);
        perror("strdup");
        return NULL;
    }

    // Tokenize the path
    char* token = strtok(path_dup, ":");
    int index = 0;
    while (token != NULL) {
        dirs[index] = strdup(token);
        if (dirs[index] == NULL) {
            // Clean up in case of allocation failure
            for (int j = 0; j < index; j++) {
                free(dirs[j]);
            }
            free(dirs);
            free(path_dup);
            perror("strdup");
            return NULL;
        }
        index++;
        token = strtok(NULL, ":");
    }
    dirs[index] = NULL; // NULL-terminate the array

    // Clean up
    free(path_dup);

    return dirs;
}

char* build_full_path(const char* dir, const char* file) {
    if (dir == NULL || file == NULL) {
        return NULL;  // Handle null inputs
    }

    // Calculate the required length
    size_t length = strlen(dir) + 1 + strlen(file) + 1;  // +1 for slash and +1 for null-terminator

    // Allocate memory for the full path
    char* fullPath = malloc(length);
    if (fullPath == NULL) {
        perror("malloc");
        return NULL;
    }

    // Construct the full path
    snprintf(fullPath, length, "%s/%s", dir, file);

    return fullPath;
}

int	execute_command(const char* fullPath, char* const argv[]) {
    pid_t pid = fork();  // Fork a new process

    if (pid == -1) {
        // Fork failed
        perror("fork");
        return -1;
    } else if (pid == 0) {
        // Child process
        execv(fullPath, argv);  // Execute the command
        perror("execv");        // execv only returns if there is an error
        exit(EXIT_FAILURE);
    } else {
        // Parent process
        int status;
        waitpid(pid, &status, 0);  // Wait for the child process to finish
        if (WIFEXITED(status)) {   // Check if the child exited normally
            return WEXITSTATUS(status);  // Return the exit status of the child
        } else {
            return -1;  // Child did not exit normally
        }
    }
}

void command_not_found(const char* file) {
    fprintf(stderr, "%s: command not found\n", file);
}

int ft_execvp(const char *file, char *const argv[], char *const envp[]) {
	const char *path_const = find_path_env(envp);
    if (path_const == NULL) {
        fprintf(stderr, "PATH not found\n");
        return -1;
    }
    char *path = strdup(path_const);
    if (path == NULL) {
        perror("strdup");
        return -1;
    }
	char** directories = tokenize_path(path_const);
	for (int i = 0; directories[i] != NULL; i++) {
        char* fullPath = build_full_path(directories[i], file);
        if (access(fullPath, X_OK) == 0) {
            int status = execute_command(fullPath, argv);
            free(fullPath);
            free(directories);
            return status;
        }
        free(fullPath);
    }
    free(directories);

    command_not_found(file);
    return -1;
}

int main(int argc, char **argv, char **envp) {
    if (argc < 2) {
        fprintf(stderr, "Usage: %s command\n", argv[0]);
        return 1;
    }

    ft_execvp(argv[1], &argv[1], envp);
    return 0;
}