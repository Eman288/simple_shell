#include "main.h"

int real_exe(char *cmd, char **tonks)
{
	pid_t pid, wpid;

	int status;

	pid = fork();
	if(pid == 0)
	{
		if (execuve(cmd,tonks, NULL)) == -1)
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
		wait();
	}
	return(1);
}
