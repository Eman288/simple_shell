#include "main.h"

/**
 * _getenv - a function that returns the environment for the value sent to it
 * @wanted: the value we want its environment
 * Return: the environment of the wanted value or NULL if not found
*/

char *_getenv(char *wanted)
{
	char *token, *path_cpy, *s;

	int i;

	i = 0;
	while (environ[i])
	{
		path_cpy = _strdup(environ[i]);
		token = strtok(path_cpy, "=");
		if (_strcmp(token, wanted) == 0)
		{
			s = _strdup(strtok(NULL, "\0"));
			free(path_cpy);
			return (s);
		}
		free(path_cpy);
		i++;
	}
	return (NULL);
}
