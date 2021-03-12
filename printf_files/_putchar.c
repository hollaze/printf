#include <unistd.h>
#include "holberton.h"

/**
*_putchar - that function write a char
*@c: char
*/

void	_putchar(char c)
{
	write(1, &c, 1);
}
