#include "shell.h"

/**
 * forking_helper - the fork is used to create
 *child process and execute command
 *
 * @av: for commandline argument
 * Return: (1) on fail or (0) on success
 */

int forking_helper(char **av)
{
	pid_t forking_val;

	forking_val = fork();
	if (forking_val == -1)
		return (1);

	if (forking_val == 0)
	{
		if (execve(av[0], av, NULL) == -1)
			exit(1);
	}
	else
	{
		wait(NULL);
		return (0);
	}

	return (0);
}
