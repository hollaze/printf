#include "holberton.h"

/**
 * print_s - print a string
 * @args: arguments to print
 * Return: number of characters
 */

int print_s(va_list args)
{
	int i = 0;
	char *s;

	s = va_arg(args, char *);

	if (s == NULL)
		s = "(null)";

	while (s[i] != '\0')
	{
		_putchar(s[i]);
		i++;
	}

return (i);
}

