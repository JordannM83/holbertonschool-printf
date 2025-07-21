#ifndef _MAIN_
#define _MAIN_
#include <stdarg.h>

/**
 * struct print - Struct print
 * @c: The format specifier
 * @f: The function associated
 *
 * Description: This struct is used to associate a format specifier
 * with its corresponding function for printing.
 */

typedef struct print
{
	char *c;
	void (*f)(va_list);
} print_t;

int _putchar(char c);

int _printf(const char *format, ...);



#endif
