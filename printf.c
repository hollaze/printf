#include "holberton.h"
#include <stdarg.h>

/**
 *
 *
 *
 */

int _printf(const char *format, ...);
{

	int i;

	if (!format)
		return (NULL);

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			i++;

			if (format[i] == '%')
				printf_per(format[i]);

			get_op_func
		}

	}

}

int main(void)
{

	printf("%s", "s");
	printf("%c", 'c');
	printf("%%");

return (0);

}
