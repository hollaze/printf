#include "holberton.h"

/**
 * print_i - print an int
 * @args: argument to print
 *
 * Return: number of character
 */

int print_i(va_list args)
{
	int n, pow = 1, count = 0;
	unsigned int nb;

	n = va_arg(args, int);

	if (n < 0)
	{
		_putchar('-');
		nb = -n;
		count += 1;
	}

	else
		nb = n;

	while (nb / pow > 9)
		pow *= 10;

	while (pow != 0)
	{
		count += _putchar((nb / pow) + '0');

		nb %= pow;
		pow /= 10;
	}

return (count);

}
