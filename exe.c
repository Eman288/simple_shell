#include "main.h"
int do_cd(char **tonks);
int do_exit(char **tonks);
int do_env(char **tonks);

char *built_in[] = {
	"cd",
	"exit",
	"env",
	NULL
};
int (*built_in_func[]) (char **) = {
	&do_cd,
	&do_exit,
	&do_env
};

/**
 * exe - a funtion that makes sure if the command is a built in function or not
 * @tonks: an array of tokens taken from the user after spliting it
 * Return: the value of the built in function or the value of the execution
 */

int exe(char **tonks)
{
	int i;

	if (tonks[0] == NULL)
	{
		return (1);
	}
	for (i = 0; built_in[i]; i++)
	{
		if (_strcmp(tonks[0], built_in[i]) == 0)
		{
			return ((*built_in_func[i])(tonks));
		}
	}
	return (is_execute(tonks));
}
