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
	char *s, *c;

	int n;

	c = str;
	n = 0;
	if (str == 0)
	{
		return (NULL);
	}
	while (*str != '\0')
	{
		n++;
		str++;
	}
	s = (char *) malloc(n * sizeof(char) + 1);
	if (s == 0)
	{
		return (NULL);
	}
	if (n == 0 || s == NULL)
	{
		return (NULL);
	}
	str = s;
	while (*c != '\0')
	{
		*s = *c;
		s++;
		c++;
	}
	return (str);
}
