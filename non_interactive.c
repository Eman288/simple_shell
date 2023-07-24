#include "main.h"

int non_interactive(void)
{
	char *string, **tonks, *buf;

	int n, f, r;

	FILE *fd;

	string = get_line();
	if(access(string, F_OK))
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
		tonks = split_line(string);
		n = exe(tonks);
	}
	free(string);
	free(tonks);
	return(0);
}
