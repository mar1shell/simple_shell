#include "mshell.h"
/**
* mprintf - printf basically
* @format: format string
* @...: variable number of args
*/
void mprintf(const char *format, ...)
{
	va_list lista;

	va_start(lista, format);
	vfprintf(stdout, format, lista);
	va_end(lista);
}

