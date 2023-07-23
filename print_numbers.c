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

	chars_printed = 0;
	num = va_arg(args, int);
	/* Handle the case of INT_MIN (-2147483648) separately */
	if (num == -2147483648)
	{
		chars_printed += _puts("-2147483648");
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

/**
 * print_b - print binary on insigned int
 * @args: passed integer
 * Return: length of printed binary
 */
int print_b(va_list args)
{
	unsigned int num;
	int i, j;
	/* Stores binary representation of number.*/
	int binaryNum[32]; /* Assuming 32 bit integer.*/

	num = va_arg(args, unsigned int);
	if (num == 0)
	{
		_putchar('0');
		return (1);
	}
	for (i = 0; num > 0; i++)
	{
		binaryNum[i] = num % 2;
		num /= 2;
	}

	/* Printing array in reverse order.*/
	for (j = i - 1; j >= 0; j--)
		_putchar('0' +  binaryNum[j]);

	return (i);
}
