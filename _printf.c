#include "holberton.h"
#include <stdarg.h>

/**
 * _printf - print any type
 * @format: string
 *
 * Return: Number of character
 */

int _printf(const char *format, ...);
{
	va_list args;

	int i = 0;
	int (*res)(va_list);

	if (!format)
		return (i);

	va_start(args, format);

	for (i ; format[i] != '\0'; i++)
	{
		format = va_arg(args, char *);
		_putchar(format[i]);
		res = get_letter_func(format[i]);
		res();
	}

	va_end(args);

return (i);

}

