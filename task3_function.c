#include "main.h"

/**
 * print_u - print unsigned int
 * @args: passed integer
 * Return: length of printed unsigned int
 */
int print_u(va_list args)
{
	unsigned int num;
	unsigned int div, dig;
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

/**
 * print_o - print octal of insigned int
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

	if (num == 0)
	{
		_putchar('0');
		chars_printed++;
	}
	else
	{
		char hex_chars[] = "0123456789abcdef";
		char hex_digits[20];
		int i = 0;

		while (num > 0)
		{
			hex_digits[i] = hex_chars[num % 16];
			num /= 16;
			i++;
		}

		while (i > 0)
		{
			i--;
			_putchar(hex_digits[i]);
			chars_printed++;
		}
	}

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

	if (num == 0)
	{
		_putchar('0');
		chars_printed++;
	}
	else
	{
		char hex_chars[] = "0123456789ABCDEF";
		char hex_digits[20];
		int i = 0;

		while (num > 0)
		{
			hex_digits[i] = hex_chars[num % 16];
			num /= 16;
			i++;
		}

		while (i > 0)
		{
			i--;
			_putchar(hex_digits[i]);
			chars_printed++;
		}
	}

	return (chars_printed);
}