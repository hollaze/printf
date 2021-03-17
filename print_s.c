#include "holberton.h"
#include <stdarg.h>

/**
 * print_s - print a string
 * @args: arguments to print
 * Return: number of characters
 */

int print_s(va_list args)
{
	int i, len = 0;
	char *s;

	s = va_arg(args, char *);

	while (s[len] != '\0')
		len++;

	for (i = 0; i < len; i++)
	{
		if (!s)
			return (-1);

		_putchar(s[i]);
	}


return (i);
}

