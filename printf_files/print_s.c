#include "holberton.h"

/**
 *
 *
 */

void printf_s(char *s, ...)
{

	int i;

	va_list args;

	va_start(args, s);

	for (i = 0; s != '\0'; i++)
		s = va_arg(args, char *)

	va_end(args);

}
