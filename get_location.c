#include "main.h"


/**
 * get_location - the function return the location of the command
 * @cmd: the command we want its location
 * Return: the command's location or NULL if not found
 */

char *get_location(char *cmd)
{
	char *path, *path_copy, *path_token, *file_path;

	struct stat buffer;

	path = _getenv("PATH");
	if (path)
	{	path_copy = _strdup(path);
		path_token = strtok(path_copy, ":");
		while (path_token != NULL)
		{
			file_path = malloc(_strlen(cmd) + _strlen(path_token) + 2);
			_strcpy(file_path, path_token);
			_strcat(file_path, "/");
			_strcat(file_path, cmd);
			_strcat(file_path, "\0");
			if (stat(file_path, &buffer) == 0)
			{
				free(path);
				free(path_copy);
				return (file_path);
			}
			free(file_path);
			path_token = strtok(NULL, ":");
		}
		free(path);
		free(path_copy);
		if (stat(cmd, &buffer) == 0)
			return (cmd);
		return (NULL);
	}
	free(path);
	return (NULL);
}
