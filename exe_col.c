#include "main.h"

int exe_col(char *string)
{
	char **tonks, **comm;

	int i;

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
			return (0);
		free(comm);
		i++;
	}
	free(tonks);
	return (1);
}
