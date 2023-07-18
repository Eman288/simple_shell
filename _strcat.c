#include "main.h"
/**
*_strcat - a function that concatenates two strings
*@dest: a char
*@src: a char
*Return: Always 0 (Success)
*/
char *_strcat(char *dest, char *src)
{
	int n;

	char *s;

	s = dest;
	n = 0;
	while (*dest != '\0')
	{
		n++;
		dest++;
	}
	while (*src != '\0')
	{
		*dest = *src;
		src++;
		dest++;
	}
	return (s);
}
