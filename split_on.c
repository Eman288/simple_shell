#include "main.h"

char **split_on(char *str, char *delim)
{
	char **tonks, *tok;

	int len, i;

	i = 0;
	len = _strlen(str);
	if (len == 0)
		return (NULL);
	tonks = malloc(sizeof(char *) * (len + 1));
	if (!tonks)
		return (NULL);
	tok = strtok(str, delim);
	while (tok)
	{
		tonks[i] = malloc(sizeof(char) * _strlen(tok) + 1);
		if (!tok[i])
		{
			free(tonks);
			return (NULL);
		}
		_strcpy(tonks[i], tok);
		tok = strtok(NULL, delim);
		i++;
	}
	tonks[i] = NULL;
	return (tonks);
}
