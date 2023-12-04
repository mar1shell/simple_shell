#include "mshell.h"
/**
* main - entry point
* Return: 0
*/
int main(void)
{
	char cmd[252];

	while (1)
	{
		promptdisplay();
		usrinput(cmd, sizeof(cmd));

		if (strcmp(cmd, "exit") == 0)
		{
			exit(EXIT_SUCCESS);
		}
		if (strcmp(cmd, "env") == 0)
		{
			char **env = environ;

			while (*env)
			{
				mprintf("%s\n", *env);
				env++;
			}
		}
		executecmd(cmd);
	}
	return (0);
}
