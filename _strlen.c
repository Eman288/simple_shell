#include "main.h"
/**
*_strlen -  a function that returns the length of a string
*@s: a char
*Return: Always 0 (Success)
*/
int _strlen(char *s)
{
	int i;

	i = 0;
	while (*s != '\0')
	{
		i++;
		s++;
	}
	return (i);
}
