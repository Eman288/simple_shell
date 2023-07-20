#include "main.h"

/**
 * real_exe - the function executes the command send by the user
 * @cmd: the command we want to execute
 * @tonks: an array of tokens
 * Return: if we didn't exit we will return (1)
 */

int real_exe(char *cmd, char **tonks)
{
	pid_t pid/*, wpid*/;

	/*int status;*/

	pid = fork();
	if (pid == 0)
	{
		if (execve(cmd, tonks, NULL) == -1)
		{
			perror("error");
		}
		exit(0);
	}
	else if (pid < 0)
	{
		perror("error");
	}
	else
	{
		wait(NULL);
	}
	return (1);
}
