#include "main.h"

/**
 * print_b - print binary on unsigned int
 * @args: passed integer
 * Return: length of printed binary
 */
int print_b(va_list args)
{
	unsigned int num;
	char *s;

	num = va_arg(args, unsigned int);
	s = convert(num, 2, 1);

	return (_puts(s));
}

/**
 * print_o - print octal of unsigned int
 * @args: passed integer
 * Return: length of printed binary
 * Description: to calculate octal we divide by 8
 * and take the reminder and repeter
 */
int print_o(va_list args)
{
	unsigned int num;
	int i, j;

	int binaryNum[20]; /* Sufficient to hold 64-bit octal representation.*/

	num = va_arg(args, unsigned int);
	if (num == 0)
	{
		_putchar('0');
		return (1);
	}
	for (i = 0; num > 0; i++)
	{
		binaryNum[i] = num % 8;
		num /= 8;
	}

	/* Printing array in reverse order.*/
	for (j = i - 1; j >= 0; j--)
		_putchar('0' +  binaryNum[j]);

	return (i);
}

/**
 * print_x - print hexadecimal (lowercase)
 * @args: passed unsigned int
 * Return: length of printed hexadecimal string
 */
int print_x(va_list args)
{
	unsigned int num = va_arg(args, unsigned int);
	int chars_printed = 0;
	char *s;

	s = convert(num, 16, 0);
	chars_printed += _puts(s);

	return (chars_printed);
}

/**
 * print_X - print hexadecimal (uppercase)
 * @args: passed unsigned int
 * Return: length of printed hexadecimal string
 */
int print_X(va_list args)
{
	unsigned int num = va_arg(args, unsigned int);
	int chars_printed = 0;
	char *s;

	s = convert(num, 16, 1);

	chars_printed += _puts(s);

	return (chars_printed);
}
