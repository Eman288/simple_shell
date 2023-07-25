#include "main.h"

/**
 * non_interactive - a function to start the shell in the non-interactive mode
 * Return: 0
 */

int non_interactive(void)
{
	char *string, **tonks;

	int n;

	string = get_line();
	/*
	 * if(access(string, F_OK))
	{
		printf("file!");
		f = open(string , O_RDONLY);
		if (f < -1)
		{
			perror("File can not be exucuted");
		}
	}
	else
	{
	*/
		tonks = split_line(string);
		n = exe(tonks);
	free(string);
	free(tonks);
	return (n);
}
