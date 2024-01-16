/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex_bonus.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hezhukov <hezhukov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 12:12:41 by hezhukov          #+#    #+#             */
/*   Updated: 2024/01/15 19:59:10 by hezhukov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../pipex.h"

/*
current tasks
[ ] - execute_pipeline modularity
	[ ] - redirect_intermediate_command

unsovled taks
[ ] - norminette
[ ] - replace standard functions with custom one
	execute_command
	[ ] - think of the purpose of t_pipex_data *pipeline, int index
	[ ] - replace the hardcoded magic numbers 10 with a macro
	[ ] - what is the purpose of strdup? why not just use cmd? maybe because strtok modify original array

solved tasks
[X] - when i build with pipex_utilities_bonus.c pipex_execution_bonus.c -> solution was to rename similar functions.
[X] - add infile and outfile redirection
	[X] - 2nd command is not executed
[X] - replace ececvp with ft_execvp
[X] - incorporate here_doc in a curent logic.
	[X] - parse here_doc in command line
	[X] - initialize limiter with here_doc
	[X] - redirect input to a here_doc
	[X] - here_doc testing
*/

void create_pipes(int pipefds[], int n_pipes) {
    for (int i = 0; i < n_pipes; i++) {
        if (pipe(pipefds + i * 2) < 0) {
            perror("pipe");
            exit(EXIT_FAILURE);
        }
        dprintf(2, "Created pipe %d: read fd %d, write fd %d\n", i, pipefds[i * 2], pipefds[i * 2 + 1]);
    }
}


void execute_command(const char *cmd, t_pipex_data *pipeline, int index) {
	dprintf(2, "Executing command: %s\n", cmd);
	(void)pipeline;
	(void)index;
    // Split the command into arguments
    char *args[10]; // assuming a max of 10 arguments for simplicity
    int argc = 0;
    char *token;
    char *tempCmd = strdup(cmd); // create a modifiable copy of cmd

    token = strtok(tempCmd, " ");
    while (token != NULL && argc < 10) {
        args[argc++] = token;
        token = strtok(NULL, " ");
    }
    args[argc] = NULL; // null-terminate the arguments list

    // Execute the command
	for (int i = 0; i < argc; i++)
		dprintf(2, "args[%d] = %s\n", i, args[i]);
    if (ft_execvp(args[0], args, pipeline->envp) < 0) {
        perror("execvp");  // Handle errors in execvp
        free(tempCmd);
        exit(EXIT_FAILURE);
    }

    free(tempCmd); // free the duplicated command string
}

/*
void execute_pipeline(t_pipex_data *pipeline)
{
    create_pipes(pipeline->pipefds, pipeline->n_pipes);

    for (int i = 0; i < pipeline->n_cmds; i++) {
        dprintf(2, "Creating process for command %d: %s\n", i, pipeline->argv[i]);
        pid_t pid = fork();

        if (pid == 0) {
            if (i == 0 && pipeline->here_doc == true) {
				redirect_here_doc(pipeline);
            }
			else if (i == 0) {
				redirect_first_command(pipeline);
			}
            if (i == pipeline->n_cmds - 1) {
                redirect_last_command(pipeline);
            }
            if (i > 0) {
                // Close write-end of the previous pipe
                close(pipeline->pipefds[(i - 1) * 2 + 1]);
                if (dup2(pipeline->pipefds[(i - 1) * 2], STDIN_FILENO) < 0) {
                    perror("dup2 (stdin)");
                    exit(EXIT_FAILURE);
                }
            }
            if (i < pipeline->n_cmds - 1) {
                // Close read-end of the next pipe
                close(pipeline->pipefds[i * 2]);
                if (dup2(pipeline->pipefds[i * 2 + 1], STDOUT_FILENO) < 0) {
                    perror("dup2 (stdout)");
                    exit(EXIT_FAILURE);
                }
            }

            // Close all other pipe fds in child
            for (int j = 0; j < 2 * pipeline->n_pipes; j++) {
                close(pipeline->pipefds[j]);
            }

            execute_command(pipeline->argv[i], pipeline, i);
            exit(EXIT_FAILURE); // If execvp fails
        } else if (pid < 0) {
            perror("fork");
            exit(EXIT_FAILURE);
        } else { // Parent process
            // Close the used ends of the pipe
            if (i > 0) {
                close(pipeline->pipefds[(i - 1) * 2]);
            }
            if (i < pipeline->n_cmds - 1) {
                close(pipeline->pipefds[i * 2 + 1]);
            }
        }
    }
    for (int i = 0; i < 2 * pipeline->n_pipes; i++) {
        close(pipeline->pipefds[i]);
    }
    cleanup_pipes_and_wait(pipeline);
}
*/

void close_pipes(t_pipex_data *pipeline, int current_cmd) {
    for (int i = 0; i < 2 * pipeline->n_pipes; i++) {
        if (i != (current_cmd - 1) * 2 && i != current_cmd * 2 + 1) {
            dprintf(2, "Closing pipe fd %d in child process for command %d\n", i, current_cmd);
            close(pipeline->pipefds[i]);
        }
    }
}


void setup_child_process(t_pipex_data *pipeline, int i) {
    if (i == 0 && pipeline->here_doc) {
        redirect_here_doc(pipeline);
    } else if (i == 0) {
		dprintf(2, "Redirected stdin for first command from fd %d\n", /* appropriate fd */);
        redirect_first_command(pipeline);
    } else if (i == pipeline->n_cmds - 1) {
		dprintf(2, "Redirected stdout for last command to fd %d\n", /* appropriate fd */);
        redirect_last_command(pipeline);
    } else {
		dprintf(2, "Redirected stdin and stdout for intermediate command %d\n", index);
        redirect_intermediate_command(pipeline, i);
    }

    dprintf(2, "Closing unnecessary pipes for command %d\n", i);
    close_pipes(pipeline, i);

    dprintf(2, "Closing all pipes in child process for command %d\n", i);
    for (int j = 0; j < 2 * pipeline->n_pipes; j++) {
        dprintf(2, "Child process (cmd %d) closing pipe fd %d\n", i, j);
        close(pipeline->pipefds[j]);
    }

    dprintf(2, "Executing command %d: %s\n", i, pipeline->argv[i]);
    execute_command(pipeline->argv[i], pipeline, i);
    exit(EXIT_FAILURE);
}


void handle_parent_process(t_pipex_data *pipeline, int i) {
    if (i > 0) {
        dprintf(2, "Parent process (cmd %d) closing read end of pipe (fd %d)\n", i, (i - 1) * 2);
        close(pipeline->pipefds[(i - 1) * 2]);
    }
    if (i < pipeline->n_cmds - 1) {
        dprintf(2, "Parent process (cmd %d) closing write end of pipe (fd %d)\n", i, i * 2 + 1);
        close(pipeline->pipefds[i * 2 + 1]);
    }
}


void execute_pipeline(t_pipex_data *pipeline) {
    create_pipes(pipeline->pipefds, pipeline->n_pipes);

    for (int i = 0; i < pipeline->n_cmds; i++) {
        pid_t pid = fork();

        if (pid == 0) {
            setup_child_process(pipeline, i);
        } else if (pid < 0) {
            perror("fork");
            exit(EXIT_FAILURE);
        } else {
            handle_parent_process(pipeline, i);
        }
    }

    dprintf(2, "Parent process closing all remaining pipe fds\n");
    for (int i = 0; i < 2 * pipeline->n_pipes; i++) {
        dprintf(2, "Parent process closing pipe fd %d\n", i);
        close(pipeline->pipefds[i]);
    }

    cleanup_pipes_and_wait(pipeline);
}


int main(int argc, char *argv[], char *envp[])
{
	t_pipex_data	pipeline;

	if (argc < 5)
	{
		ft_putstr_fd("Usage: ./pipex infile cmd1 cmd2 ... cmdn outfile\n", 2);
		return (EXIT_FAILURE);
	}
	if (strcmp(argv[1], "here_doc") == 0)
	{
		if (argc < 6) {
		ft_putstr_fd("Usage: ./pipex here_doc LIMITER cmd1 cmd2 ... cmdn outfile\n", 2);
		return (EXIT_FAILURE);
	}
	pipeline.limiter = argv[2];
	pipeline.here_doc = true;
	}
	else
	{
		pipeline.limiter = NULL;
		pipeline.here_doc = false;
	}
	init_pipex_data(&pipeline, argc, argv, envp);
	execute_pipeline(&pipeline);
	free(pipeline.pipefds);
	return EXIT_SUCCESS;
}
