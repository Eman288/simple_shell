#include "main.h"

/**
 *main - the main function to launch the prompt
 *Return: Always (0)
 */
int main(void)
{
	int stat;

	char *string, **tonks;

	if (isatty(STDIN_FILENO) == 1)
	{
	do {
		write(STDOUT_FILENO, "($) ", 4);
		string = get_line();
		if (string != NULL)
		{
			tonks = split_line(string);
			stat = exe(tonks);
		}
		free(tonks);
		free(string);
	} while (stat);
	}
	return (0);
}
