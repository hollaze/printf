#include <unistd.h>
#include "holberton.h"

/**
 * _putchar - write a char
 * @c: char
 * Return: 1
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
