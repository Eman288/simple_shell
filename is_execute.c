#include "main.h"

/**
 * is_execute - the function checks if the command really exists or not
 * @tonks: an array of tokens
 * Return: 1 if not found, the execution value if found
 */

int is_execute(char **tonks)
{
	char *file_path;

	int j;

	file_path = get_location(tonks[0]);

	if (file_path == NULL)
	{
		_print_str("./hsh: No such file or directory\n");
		for (j = 0; tonks[j]; j++)
			free(tonks[j]);
		return (1);
	}
	return (real_exe(file_path, tonks));
}
