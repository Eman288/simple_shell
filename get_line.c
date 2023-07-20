#include "main.h"

/**
 * get_line - the function takes a line from the user
 * Return: return the line taken from the user
 */
char *get_line(void)
{
	size_t n;

	char *buf = NULL;

	n = 0;
	if (getline(&buf, &n, stdin) == -1)
	{
		exit(EXIT_SUCCESS);
	}
	return (buf);
}
