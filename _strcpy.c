#include "main.h"
/**
*_strcpy - a function that copies the string pointed t
*@dest: a char
*@src: a char
*Return: Always 0 (Success)
*/
char *_strcpy(char *dest, char *src)
{
	char *m;

	m = dest;
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = *src;
	return (m);
}
