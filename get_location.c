#include "main.h"
char *getpath(void)
{
	char *path, *m;

	int i;

	for (i = 0; environ[i]; i++)
	{
		m = environ[i];
		if (m[0] == 'P' && m[1] == 'A' && m[2] == 'T' && m[3] == 'H')
		{
			return (m);
		}
	}
	return (NULL);
}
char *get_location(char *cmd)
{
	char *p, *path, *path_copy, *path_token, *file_path, *o;

	int cmd_len, dir_len;

	struct stat buffer;

	p = getpath();
	/*o = malloc(sizeof(char) * _strlen(p) + 1);*/
	_strcpy(o, p);
	/*
	path = strtok(o, "=");
	path = strtok(NULL, "\0");
	if (path)
	{	_strcpy(path_copy, path);
		cmd_len = _strlen(cmd);
		path_token = strtok(path_copy, ":");
		while (path_token != NULL)
		{
			dir_len = _strlen(path_token);
			file_path = malloc(cmd_len + dir_len + 2);
			_strcpy(file_path, path_token);
			_strcat(file_path, "/");
			_strcat(file_path, cmd);
			_strcat(file_path, "\0");
			if (stat(file_path, &buffer) == 0)
			{
				free(path_copy);
				free(o);
				return (file_path);
			}
			free(file_path);
			path_token = strtok(NULL, ":");
		}
		free(path_copy);
		*free(o);
		if (stat(cmd, &buffer) == 0)
			return (cmd);
		return (NULL);
	}
	*free(o);*/
	printf("%s\n" , o);
	return (NULL);
}
