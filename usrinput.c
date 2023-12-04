#include "mshell.h"
/**
* usrinput - reads input
* @cmd: command
* @size: size
*/
void usrinput(char *cmd, size_t size)
{
	if (fgets(cmd, size, stdin) == NULL)
	{
		if (feof(stdin))
		{
			mprintf("\n");
			exit(EXIT_SUCCESS);
		}
		else
		{
			mprintf("Error reading input.\n");
			exit(EXIT_FAILURE);
		}
	}
	cmd[strcspn(cmd, "\n")] = '\0';
}

