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
	char specifier;
	int (*function)(va_list);
} print_t;

int _putchar(char c);

int _printf(const char *format, ...);

int (*get_format_func(char specifier))(va_list);

int print_char(va_list args);

int print_string(va_list args);

int print_percent(va_list args);

int print_int(va_list args);

int print_decimal(va_list args);

#endif
