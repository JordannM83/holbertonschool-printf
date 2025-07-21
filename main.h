#ifndef _MAIN_
#define _MAIN_
#include <stdarg.h>

/**
 * struct print - Struct print
 * @specifiers: The format specifier
 * @function: The function associated
 *
 * Description: This struct is used to associate a format specifier
 * with its corresponding function for printing.
 */

typedef struct print
{
	char *specifiers;
	void (*function)(va_list);
} print_t;

int _putchar(char c);

int _printf(const char *format, ...);

void (*get_format_func(char *specifier))(va_list);

void print_char(va_list args);

void print_string(va_list args);

void print_percent(va_list args);



#endif
