#include "holberton.h"

/**
 * get_op_func - search to match letters and invoke function
 * if it does
 *
 * @s: letters to match
 *
 * Return: function if letter match, NULL otherwise
 */

int (*get_op_func(char *s))(va_list)
{

	Letter_t letters[] = {

	{"%s", printf_s},
	{"%c", printf_c},
	{"%d", printf_d},
	{"%i", printf_i},
	{"%%", print_per}

};

	int i = 0;

	while (i <= 5)
	{
		if (letters[i].letter[0] == s[0])
			return (letters[i].f);

		i++;
	}

return (NULL);

}
