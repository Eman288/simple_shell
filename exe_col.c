#include "main.h"

/**
 * exe_col - a function to execute a line with ; operator(s)
 * @string: the string
 * Return: 1 in success, 0 in failure
 */

int exe_col(char *string)
{
	char **tonks, **comm;

	int i, j;

	i = 0;
	tonks = split_on(string, ";");
	if (!tonks)
	{
		free(tonks);
		return (1);
	}
	while (tonks[i])
	{
		comm = split_line(tonks[i]);
		if (exe(comm) == 0)
		{
			for (j = 0; comm[j]; j++)
				free(comm[j]);
			free(comm);
			for (j = 0; j <= i; j++)
				free(tonks[j]);
			free(tonks[j]);
			return (0);
		}
		for (j = 0; comm[j]; j++)
			free(comm[j]);
		free(comm);
		i++;
	}
	for (j = 0; j <= i; j++)
		free(tonks[j]);
	free(tonks);
	return (1);
}
