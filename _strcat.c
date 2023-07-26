#include "main.h"
/**
*_strcat - a function that concatenates two strings
*@dest: a char
*@src: a char
*Return: Always 0 (Success)
*/
char *_strcat(char *dest,const char *src)
{
	char *s;

	s = dest + _strlen(dest);
	/*
	while (*dest != '\0')
	{
		n++;
		dest++;
	}
	*/
	while (*src != '\0')
		*s++ = *src++;
	*s = '\0';
	return (dest);
}
