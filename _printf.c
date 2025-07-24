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
	int (*func)(va_list);

	if (!format)
		return (-1);
	va_start(args, format);
	while (format[i])
	{
		if (format[i] == '%')
		{
			if (!format[i + 1])
				return (-1);
			func = get_format_func(format[i + 1]);
			if (func)
				len += func(args);
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
