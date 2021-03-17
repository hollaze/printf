#include "holberton.h"

/**
 * _printf - print any type
 * @format: string
 *
 * Return: Number of character
 */

int _printf(const char *format, ...)
{
	va_list args;

	int i;
	int (*res)(va_list);

	if (format == NULL)
		return (-1);

	va_start(args, format);

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			i++;

			res = get_letter_func(format[i]);

			if (res == NULL)
				return (-1);

			res(args);

			continue;
		}

		_putchar(format[i]);

	}

	va_end(args);

return (i);

}

