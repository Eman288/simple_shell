#include "main.h"

int is_execute(char **tonks)
{
	char *file_path;

	file_path = get_location(tonks[0]);

	if (file_path == NULL)
		return(1);
	return(real_exe(file_path, tonks);
}
