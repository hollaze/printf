#include "holberton.h"

/**
 * print_i - print an int
 * @args: argument to print
 *
 * Return: number of character
 */

int print_i(va_list args)
{
	int i, n, count = 1;

	n = va_arg(args, int);

	if (!n)
		return (0);

	if (n < 0)
	{
		_putchar('-');
		i = -n;
	}

	else
		i = n;

	if (i > 9)
	{
		print_i(i / 10);
		i %= 10;
		count++;
	}
	_putchar(i + '0');

return (count);

}
