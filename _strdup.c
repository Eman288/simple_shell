#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
*_strdup - a function that returns a pointer to a newly allocated space
*@str: a char
*Return: Always 0 (Success)
*/
char *_strdup(char *str)
{
	char *c;

	static char *s;

	int n;

	c = str;
	n = 0;
	if (str == 0)
	{
		return (NULL);
	}
	n = _strlen(str);
	s = (char *) malloc(n * sizeof(char) + 1);
	if (s == 0)
	{
		perror("hsh: memory allocation error");
		free(s);
		return (NULL);
	}
	if (n == 0 || s == NULL)
	{
		free(s);
		return (NULL);
	}
	c = s;
	while (*str)
	{
		*c = *str;
		c++;
		str++;
	}
	*c = '\0';
	return (s);
}
