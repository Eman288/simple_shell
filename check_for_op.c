#include "main.h"

int check_for_op(char *string)
{
	int m, flag;

	flag = 0;
	for (m = 0; string[m]; m++)
	{
		if (string[m] == ';')
		{
			flag = 1;
			break;
		}
		else if (string[m] == '&')
		{
			flag = 2;
			break;
		}
		if (string[m] == '|')
		{
			flag = 3;
			break;
		}
	}
	return (flag);
}
