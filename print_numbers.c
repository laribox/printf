#include "main.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_d - Print decimal or integer
 * @args: passed integer
 * Return: length of printed int
 */
int print_d(va_list args)
{
	int num;
	unsigned int div, dig;
	int chars_printed;

	chars_printed = 0;
	num = va_arg(args, int);
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
/**
 * digit_printer - print input number by digit
 * @num: input number
 * Return: print count
 */
int digit_printer(int num)
{
	unsigned int x;
	int chars_printed;

	chars_printed = 0;
	if (num < 0)
	{
		chars_printed += _putchar('-');
		x = -num;
	}
	else
		x = num;

	if (x / 10)
		digit_printer(x / 10); /*recursion loop*/

	chars_printed += _putchar((x % 10) + '0'); /*print 1 dig*/

	return (chars_printed);
}

/**
* print_u - Print unsigned int
* @args: passed integer
* Return: length of printed unsigned int
*/
int print_u(va_list args)
{
	unsigned int num;
	unsigned long int div, dig;
	int chars_printed;

	chars_printed = 0;
	num = va_arg(args, unsigned int);

	if (num == 0)
	{
		_putchar('0');
		chars_printed++;
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
