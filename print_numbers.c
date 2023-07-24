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
	int chars_printed;

	chars_printed = 0;
	num = va_arg(args, int);

	chars_printed += digit_printer(num);

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
