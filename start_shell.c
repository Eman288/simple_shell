#include "main.h"

int main (void)
{
	int stat;

	char *string, **tonks;

	do{
		write(STDOUT_FILENO, "($) ", 4);
		string = get_line();
		tonks = split_line(string);
		stat = exe(tonks);

		free(tonks);
		free(string);
		printf("\n");
	} while(stat);
}
