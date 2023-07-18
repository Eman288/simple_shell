#include "main.h"

char *get_line(void)
{
	ssize_t n;

	char *buf = NULL;

	n = 0;
	if (getline(&buf, &n, stdin) == -1)
	{
		exit(EXIT_SUCCESS);
	}
	return(buf);
}
