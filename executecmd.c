#include "mshell.h"
/**
* executecmd - executes commands
* @cmd: command
*/
void executecmd(const char *cmd)
{
	pid_t tifl = fork();
	int status;

	if (tifl == -1)
	{
		mprintf("Error forking process\n");
		exit(EXIT_FAILURE);
	}
	else if (tifl == 0)
	{
		char *args[256];
		int args7sab = 0;

		char *token = strtok((char *)cmd, " ");

		while (token != NULL)
		{
			args[args7sab++] = token;
			token = strtok(NULL, " ");
		}
		args[args7sab] = NULL;

		execvp(args[0], args);

		mprintf("Command not found: %s\n", args[0]);
		exit(EXIT_FAILURE);
	}
	else
	{
		if (waitpid(tifl, &status, 0) == -1)
		{
		perror("Error waiting for child porcess");
		exit(EXIT_FAILURE);
		}
	}
}
