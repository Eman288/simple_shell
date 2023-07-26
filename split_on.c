#include "main.h"

/**
 * split_on - a function to split the line on the spesific delim
 * @str: the string
 * @delim: the char we will split on
 * Return: an array of tokens
 */

char **split_on(char *str, char *delim)
{
	char **tonks, *tok;

	int len, i, j;

	i = 0;
	len = _strlen(str);
	if (len == 0)
		return (NULL);
	tonks = malloc(sizeof(char *) * (len + 1));
	if (!tonks)
	{
		perror("hsh: memory allocation error");
		return (NULL);
	}
	tok = strtok(str, delim);
	while (tok)
	{
		tonks[i] = malloc(sizeof(char) * _strlen(tok) + 1);
		if (!tok[i])
		{
			perror("hsh: memory allocation error");
			for (j = 0; j <= i; j++)
				free(tonks[j]);
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
