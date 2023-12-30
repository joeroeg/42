#include "../pipex.h"

int	main(int argc, char **argv, char **envp)
{
	char	**cmd1_args;
	char	**cmd2_args;
	int		pipe_fds[2];
	pid_t	cmd1;
	pid_t	cmd2;
	int		infile_fd;
	int		outfile_fd;

	if (validate_arguments(argc) != 0)
		return (1);

	cmd1_args = parse_command(argv[2]); // parse command 1
	if (cmd1_args == NULL)
		return (1);
	cmd2_args = parse_command(argv[3]); // parse command 2
	if (cmd2_args == NULL)
		return (1);

	pipe(pipe_fds); // create pipe
	if (pipe(pipe_fds) == -1)
		error_message("pipe", 1);

	cmd1 = fork(); // create child process
	if (cmd1 == 0)
	{
		close(pipe_fds[0]); // close read end of pipe
		infile_fd = open("infile", O_RDONLY); // open infile
		dup2(infile_fd, STDIN_FILENO); // redirect stdin to infile
		close(infile_fd); // close infile
		dup2(pipe_fds[1], STDOUT_FILENO); // redirect stdout to write end of pipe
		close(pipe_fds[1]); // close write end of pipe
		ft_execvp(cmd1_args[0], cmd1_args, envp);
	}

	cmd2 = fork(); // create child process
	if (cmd2 == 0)
	{
		close(pipe_fds[1]); // close write end of pipe
		outfile_fd = open("outfile", O_WRONLY | O_CREAT | O_TRUNC, 0644); // open outfile
		dup2(pipe_fds[0], STDIN_FILENO); // redirect stdin to read end of pipe
		close(pipe_fds[0]); // close read end of pipe
		dup2(outfile_fd, STDOUT_FILENO); // redirect stdout to outfile
		close(outfile_fd); // close outfile
		ft_execvp(cmd2_args[0], cmd2_args, envp);
	}

	close(pipe_fds[0]);
	close(pipe_fds[1]);
	waitpid(cmd1, NULL, 0);
	waitpid(cmd2, NULL, 0);
	free_string_array(cmd1_args);
	free_string_array(cmd2_args);
	return (0);
}
