#include "holberton.h"

/**
 * printf_c - print a character
 * @c! character to print
 */

void printf_c(char c, ...)
{

	va_list args;


	va_start(args, c);


	c = va_arg(args, char);
	c = _putchar(c);

	va_end(args);


}
