#include "main.h"
#include <stdarg.h>
#include <stddef.h>

/**
 * get_format_func - Retrieves the function associated with a format specifier
 * @specifier: The format specifier character to look for
 *
 * Return: Pointer to the function that handles the format specifier,
 * or NULL if not found.
 */

int (*get_format_func(char specifier))(va_list)
{
	print_t format[] = {
		{'c', print_char},
		{'s', print_string},
		{'%', print_percent},
		{'d', print_decimal},
		{'i', print_int},
		{'\0', NULL}};
	int i = 0;

	while (format[i].specifier)
	{
		if (format[i].specifier == specifier)
			return (format[i].function);
		i++;
	}
	return (NULL);
}
