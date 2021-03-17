#include "holberton.h"
#include <stdarg.h>

/**
 *
 *
 *
 *
 */

int print_s(va_list args)
{
	int i;
	char *s;

	for (i = 0; s[i] != '\0'; i++)
	{
		s = va_arg(args, char *);
		if (!s)
			return (-1);

		_putchar(s[i]);
	}

	s[i] = '\0';

return (i);
}

