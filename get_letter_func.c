#include "holberton.h"

/**
 * get_letter_func - search to match letters and invoke function
 * if it does
 *
 * @s: letters to match
 *
 * Return: function if letter match, NULL otherwise
 */

int (*get_letter_func(char *s))(va_list)
{

	Letter_t letters[] = {

	{"s", print_s}, /*i equal 0*/
	{"c", print_c}, /*i equal 1 etc*/
	{"i", print_i},
	{"%", print_per}

};

	int i = 0;

	while (i < 5)
	{
		if (letters[i].letter[0] == s[0])
			return (letters[i].f);

		i++;
	}

return (NULL);

}
