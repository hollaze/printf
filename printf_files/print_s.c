#include "holberton.h"
#include <stdarg.h>

/**
 *
 *
 *
 *
 */

int printf_s(va_list args)
{
	int i;
	char *s;

	if (!s)
		return (1);

	for (i = 0; s[i] != '\0'; i++)
	{
		s = va_arg(args, char *);
		_putchar(s[i]);
	}

	s[i] = '\0';

return (i);
}

