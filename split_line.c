#include "main.h"

/**
 * split_line - the function is used to split the line into tokens
 * @string: the string taken from the user by get_line
 * Return: an array of tonks
 */

char **split_line(char *string)
{
	char **tonks, *token;

	int len, i;

	i = 0;
	len = _strlen(string);
	if (len == 0)
		return (NULL);
	tonks = malloc(sizeof(char *) * (len + 1));
	if (!tonks)
	{
		perror("hsh: memory allocation error");
		return (NULL);
	}
	token = strtok(string, " \t\r\n\a");
	while (token)
	{
		tonks[i] = malloc(sizeof(char) * _strlen(token) + 1);
		if (!tonks[i])
		{
			perror("hsh: memory allocation error");
			free(tonks);
			return (NULL);
		}
		_strcpy(tonks[i], token);
		token = strtok(NULL, " \t\r\n\a");
		i++;
	}
	tonks[i] = NULL;
	return (tonks);
}
