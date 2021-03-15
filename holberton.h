#ifndef HOLBERTON_H
#define HOLBERTON_H
int _putchar(char c);
void printf_c(char c);
void printf_s(char *s);
int string(va_list args);

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
} Letter;

#endif
