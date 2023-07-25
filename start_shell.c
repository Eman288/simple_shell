#include "main.h"

/**
 *main - the main function to launch the prompt
 *Return: Always (0)
 */
int main(void)
{
	int stat, n;

	char *string, **tonks;

	if (isatty(STDIN_FILENO) == 1)
	{
	do {
		write(STDOUT_FILENO, "($) ", 4);
		string = get_line();
		if (string != NULL)
		{
			n = check_for_op(string);
			printf("this is the op %d\n", n);
			if (n == 0)
			{
				tonks = split_line(string);
				stat = exe(tonks);
				free(tonks);
			}
			
			else if (n == 1)
				stat = exe_col(string);/*
			else if (n == 2)
                                printf("it is &!");
			else if (n == 3)
                                printf("it is |!");*/
		}
		free(string);
	} while (stat);
	}
	else
	{
		/*return(non_interactive());*/
	}
	return (0);
}
