#ifndef HOLBERTON_H
#define HOLBERTON_H
#include <stdarg.h>
#include <unistd.h>

int _printf(const char *format, ...);
int _putchar(char c);
int print_c(va_list args);
int print_s(va_list args);
int print_i(va_list args);
int print_per(va_list args);
int (*get_letter_func(char *s))(va_list);

/**
 * struct Letter - mainly used with get_letter_func
 * to match letters
 *
 * @letter: letter to match
 * @f: function associated
 */

typedef struct Letter
{
	char *letter;
	int (*f)(va_list);
} Letter_t;

#endif
