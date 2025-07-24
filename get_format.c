#include "main.h"
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>

/**
 * get_format_func - Retrieves the function associated with a format specifier
 * @specifier: The format specifier to look for
 *
 * Return: Pointer to the function that handles the format specifier,
 * or NULL if not found.
 */

int (*get_format_func(char *specifier))(va_list)
{
	print_t format[] = {
		{"c", print_char},
		{"s", print_string},
		{"%", print_percent},
		{"d", print_decimal},
		{"i", print_int},
		{NULL, NULL}};

int i = 0;

	while (format[i].specifiers != NULL)
	{
		if (strcmp(format[i].specifiers, specifier) == 0)
			return (format[i].function);
		i++;
	}
	return (NULL);
}
