#include "main.h"
int do_cd(char **tonks)
{
	if (tonks[1] == NULL)
	{
		perror("erroe");
	}
	else
	{
		if (chdir(tonks[1]) != 0)
		{
			perror("erroe");
		}
	}
	return(1);
}

int do_exit(char **tonks)
{
	return(0);
}
