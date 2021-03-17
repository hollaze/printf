#include "holberton.h"

/**
*print_c - function that print char
@args: list of argument
*Return : char
*/

int print_c(va_list args)
{
        int c;

	if (!c)
		return (-1);

        c = va_arg(args, int);
        _putchar(c);

        return (1);
}
