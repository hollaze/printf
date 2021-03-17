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

	int i = 0, count = 0;
	int (*res)(va_list);

	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);

	va_start(args, format);

	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			if (format[i + 1] != '\0')
				res = get_letter_func(format[i + 1]);
			if (res == NULL)
			{
				_putchar(format[i]);
				i++;
				count++;
			}
			else
			{
				count += res(args);
				i += 2;
				continue;
			}
		}
		_putchar(format[i]);
		count++;
		i++;
	}
	va_end(args);
return (count);
}

