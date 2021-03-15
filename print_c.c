#include "holberton.h"
#include <strarg.h>

/**
*print_c - function that print char
@args: list of argument
*Return : char
*/

int print_c(va_list args)
{
        int i;

        i = va_arg(args, int);
        _putchar(i);
        return (1);
}
