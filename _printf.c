#include <stdarg.h>
#include <stddef.h>
#include "main.h"

/**
 * _printf - Custom printf function
 * @format: The format string containing the characters and format specifiers
 *
 * Return: The number of characters printed (excluding the null byte),
 * or -1 on failure.
 */

int _printf(const char *format, ...)
{
	va_list args;
	int len = 0;
	int i = 0;
	char specifier[2];
	void (*func)(va_list);

	va_start(args, format);
	if (format == NULL)
		return (-1);
	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			if (format[i + 1] == '\0')
				return (-1);
			specifier[0] = format[i + 1];
			specifier[1] = '\0';
			func = get_format_func(specifier);
			if (func != NULL)
			{
				func(args);
				len++;
			}
			else
			{
				_putchar('%');
				_putchar(format[i + 1]);
				len += 2;
			}
			i += 2;
		}
		else
		{
			_putchar(format[i]);
			len++;
			i++;
		}
	}
	va_end(args);
	return (len);
}
