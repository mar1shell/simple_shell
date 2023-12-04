#ifndef MSHELL_H
#define MSHELL_H

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <stdarg.h>

void promptdisplay(void);
void usrinput(char *cmd, size_t size);
void executecmd(const char *cmd);
void mprintf(const char *format, ...);

#endif
