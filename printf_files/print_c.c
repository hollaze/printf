#include "holberton.h"

/**
 * printf_c - print a character
 * @c: character to print
 */

void printf_c(char c)
{
	if (!c)
		return;

	_putchar(c);
	_putchar('\n');
}

int main(void)
{

	printf_c('v');

return (0);
}
