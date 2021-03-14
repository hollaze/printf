#include "holberton.h"

/**
 *
 *
 */

void printf_s(char *s)
{
	int i;

	for (i = 0; s != '\0'; i++)
		_putchar(s[i]);
}
