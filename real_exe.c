#include "main.h"

/**
 * real_exe - the function executes the command send by the user
 * @cmd: the command we want to execute
 * @tonks: an array of tokens
 * Return: if we didn't exit we will return (1)
 */

int real_exe(char *cmd, char **tonks)
{
	pid_t pid, j;

	pid = fork();
	if (pid == 0)
	{
		if (execve(cmd, tonks, NULL) == -1)
		{
			perror("Error:");
		}
		for (j = 0; tonks[j]; j++)
			free(tonks[j]);
		free(tonks);
		exit(0);
	}
	else if (pid < 0)
	{
		perror("Error:");
	}
	else
	{
		wait(NULL);
	}
	if (_strcmp(cmd, tonks[0]) == 0)
	{
		return (1);
	}
	free(cmd);
	return (1);
}
