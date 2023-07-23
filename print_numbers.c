#include "main.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_d - print decimal or integer
 * @args: passed integer
 * Return: length of printed int
 */
int print_d(va_list args)
{
	int num;
	int div, dig;
	int chars_printed;
	char min_int_str[] = "2147483648";

	chars_printed = 0;
	num = va_arg(args, int);
	/* Handle the case of INT_MIN (-2147483648) separately */
	if (num == -2147483648)
	{
		chars_printed += _putchar('-');
		
		chars_printed += _puts(min_int_str);
		return (chars_printed);
	}
	if (num < 0)
	{
		chars_printed += _putchar('-');
		num = -num;
	}

	div = 1;
	while (num / div > 9)
		div *= 10;

	while (div > 0)
	{
		dig = num / div;
		chars_printed += _putchar('0' + dig);
		num %= div;
		div /= 10;
	}
	return (chars_printed);
}
