#include "main.h"

/**
 * _print_str - a function to print a string
 * @str: the string we want to print
 * Return: the value of the process
 */
int _print_str(char *str)
{
	int i;

	if (str == NULL)
		str = "(null)";
	for (i = 0; str[i] != '\0'; i++)
	{
		_write_char(str[i]);
	}
	return (i);
}

/**
 * _write_char - a function to print a char
 * @c: the char
 * Return: the value of the process
 */
int _write_char(char c)
{
	return (write(1, &c, 1));
}
