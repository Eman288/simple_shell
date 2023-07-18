#include "main.h"
int do_cd(char **tonks);
int do_exit(char **tonks);
char *built_in[] = {
  "cd",
  "exit",
  NULL
};
int (*built_in_func[]) (char **) = {
  &do_cd,
  &do_exit
};
int exe (char **tonks)
{
	int i;

	for (i = 0; built_in[i]; i++)
	{
		if (_strcmp(tonks[0], built_in[i]) == 0)
		{
			return(*built_in_func[i])(tonks);
		}
	}
	return(is_execute(tonks));
}
