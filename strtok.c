#include "main.h"

/**
 * strtow - splits a string into words
 * @str: input string
 * @d: delimeter string
 * Return: a pointer to an array of strings and NULL on failure
 */
char **strtow(char *str, char *d)
{
	int i, j, k, m, numwords = 0;
	char **s;

	if (str == NULL || str[0] == 0)
		return (NULL);
	if (!d)
		d = " ";
	for (i = 0; str[i] != '\0'; i++)
		if (!is_delim(str[i], d) && (is_delim(str[i + 1], d) || !str[i + 1]))
			numwords++;

	if (numwords == 0)
		return (NULL);
	s = malloc((1 + numwords) * sizeof(char *));
	if (!s)
		return (NULL);
	for (i = 0, j = 0; j < numwords; j++)
	{
		while  (is_delim(str[i], d))
			j++;
		k = 0;
		while (!is_delim(str[i + k], d) && str[i + k])
			k++;
		s[i] = malloc((k + 1) * sizeof(char));
		if (!s[i])
		{
			for (k = 0; k < j; k++)
				free(s[k]);
			free(s);
			return (NULL);
		}
		for (m = 0; m < k; m++)
			s[i][m] = str[i++];
		s[i][m] = 0;
	}
	s[i] = NULL;
	return (s);
}
