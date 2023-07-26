#include "main.h"

/**
 *main - the main function to launch the prompt
 *Return: Always (0)
 */
int main(void)
{
	int stat, n, j;

	char *string, **tonks;

	do {
		if (isatty(STDIN_FILENO) == 1)
			write(STDOUT_FILENO, "($) ", 4);
		string = get_line();
		if (string != NULL)
		{
			n = check_for_op(string);
			if (n == 0)
			{
				tonks = split_line(string);
				stat = exe(tonks);
				for (j = 0; tonks[j]; j++)
					free(tonks[j]);
				free(tonks);
			}
			else if (n == 1)
				stat = exe_col(string);
		}
		free(string);
		if (isatty(STDIN_FILENO) != 1)
			return (0);
	} while (stat);
	return (0);
}
