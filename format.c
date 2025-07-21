#include "main.h"
#include <stdarg.h>

/**
 * print_char - Prints a character
 * @args: The argument list containing the character to print
 * * Description: This function retrieves a character from the argument list
 * and prints it to standard output using _putchar.
 * * Return: void
 */

void print_char(va_list args)
{
	_putchar(va_arg(args, int));
}

/**
 * print_string - Prints a string
 * @args: The argument list containing the string to print
 * Description: This function retrieves a string from the argument list
 * and prints it character by character using _putchar.
 * Return: void
 */

void print_string(va_list args)
{
	int i = 0;
	char *str = va_arg(args, char *);

	while (str && str[i])
	{
		_putchar(str[i]);
		i++;
	}
}

/**
 * print_percent - Prints a percent sign
 * @args: The argument list (not used in this function)
 * Description: This function prints a percent sign to standard output.
 * Return: void
 */

void print_percent(va_list args)
{
	(void)args;
	_putchar('%');
}
