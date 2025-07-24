#include "main.h"
#include <stdarg.h>
#include <stddef.h>

/**
 * print_char - Prints a character
 * @args: The argument list containing the character to print
 * * Description: This function retrieves a character from the argument list
 * and prints it to standard output using _putchar.
 * * Return: Number of characters printed (always 1)
 */

int print_char(va_list args)
{
	_putchar(va_arg(args, int));
	return (1);
}

/**
 * print_string - Prints a string
 * @args: The argument list containing the string to print
 * Description: This function retrieves a string from the argument list
 * and prints it character by character using _putchar.
 * Return: Number of characters printed
 */

int print_string(va_list args)
{
	int i = 0;
	char *str = va_arg(args, char *);

	if (str == NULL)
		str = "(null)";

	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
	return (i);
}

/**
 * print_percent - Prints a percent sign
 * @args: The argument list (not used in this function)
 * Description: This function prints a percent sign to standard output.
 * Return: Number of characters printed (always 1)
 */

int print_percent(va_list args)
{
	(void)args;
	_putchar('%');
	return (1);
}

/**
 * print_int - Prints an integer
 * @args: The argument list containing the integer to print
 * Description: This function retrieves an integer from the argument list
 * and prints it to standard output using _putchar.
 * Return: Number of characters printed
 */

int print_int(va_list args)
{
	int number = va_arg(args, int);
	unsigned int num;
	int divisor = 1;
	unsigned int temp;
	int count = 0;

	if (number < 0)
	{
		_putchar('-');
		count++;
		num = -number;
	}
	else
	{
		num = number;
	}

	temp = num;
	while (temp / 10 != 0)
	{
		divisor *= 10;
		temp /= 10;
	}

	while (divisor != 0)
	{
		_putchar((num / divisor) + '0');
		count++;
		num %= divisor;
		divisor /= 10;
	}
	return (count);
}

/**
 * print_decimal - Prints a decimal integer
 * @args: The argument list containing the integer to print
 * Description: This function retrieves an integer from the argument list
 * and prints it to standard output using _putchar. Same as print_int.
 * Return: Number of characters printed
 */

int print_decimal(va_list args)
{
	return (print_int(args));
}
