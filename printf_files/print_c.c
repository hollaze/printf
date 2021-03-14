#include "holberton.h"
#include <stdarg.h>

/**
 * printf_c - print a character
 * @list: character to print
 */

int  printf_c(va_list list)
{
	int i = 0;
	i = va_arg(list, int);
	_putchar(i);
	return (1);
}
