#include "main.h"

/**
 * do_cd - execute the cd command
 * @tonks:  an array of tokens
 * Return: Always (1)
 */

int do_cd(char **tonks)
{
	if (tonks[1] == NULL)
	{
		perror("erroe");
	}
	else
	{
		if (chdir(tonks[1]) != 0)
		{
			perror("erroe");
		}
	}
	return (1);
}

/**
 * do_exit - exit the shell
 * @tonks: an array of tokens
 * Return: Always (0)
 */

int do_exit(char **tonks __attribute__((unused)))
{
	return (0);
}

/**
 * do_env - print the environment variables
 *  @tonks: an array of tokens
 * Return: Always (1)
 */

int do_env(char **tonks __attribute__((unused)))
{
	int i;

	i = 0;
	while (environ[i])
	{
		_print_str(environ[i]);
		_write_char('\n');
		i++;
	}
	return (1);
}
