#include "holberton.h"

/**
 * printf_c - print a character
 * @c! character to print
 */

void printf_c(char c)
{
	if (c == NULL)
		return;

	putchar(c);
}
