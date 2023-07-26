#include "main.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_d - Print decimal or integer
 * @args: passed integer
 * @f: pointer to the flag struct
 * @len: pointer to the flag struct
 * @width: pointer to the flag struct
 * @precision: pointer to the flag struct
 * Return: length of printed int
 */
int print_d(va_list args, flag *f, length_mod *len,
		char *width, char *precision)
{
	long int num;
	int chars_printed;

	(void)len;
	(void)width;
	(void)precision;

	chars_printed = 0;
	if (len->l == 1)
		num = va_arg(args, long int);
	else if (len->h == 1)
		num = (short int)va_arg(args, int);
	else
		num = va_arg(args, int);

	if (f->space == 1 && f->plus == 0 && num >= 0)
		chars_printed += _putchar(' ');
	if (f->plus == 1 && num >= 0)
		chars_printed += _putchar('+');

	chars_printed += count_digit(num);/*counts digit number*/

	if (num <= 0)
		chars_printed++;

	digit_printer(num);

	return (chars_printed);
}
/**
 * digit_printer - print input number by digit
 * @num: input number
 * Return: print count
 */
void digit_printer(long int num)
{
	unsigned long int x;

	if (num < 0)
	{
		_putchar('-');
		x = -num;
	}
	else
		x = num;

	if (x / 10)
		digit_printer(x / 10); /*recursion loop*/

	_putchar((x % 10) + '0'); /*print 1 dig*/
}
/**
 * count_digit - counts the number of digits of a number
 * @num: the number to count
 * Return: the number of digits
 */
int count_digit(long int num)
{
	unsigned int count = 0;
	unsigned long int n1;

	if (num < 0)
		n1 = num * -1;
	else
		n1 = num;
	while (n1 != 0)
	{
		n1 /= 10;
		count++;
	}
	return (count++);
}
/**
 * print_u - Print unsigned int
 * @args: passed integer
 * @f: pointer to the flag struct
 * @len: pointer to the flag struct
 * @width: pointer to the flag struct
 * @precision: pointer to the flag struct
 * Return: length of printed unsigned int
 */
int print_u(va_list args, flag *f, length_mod *len,
		char *width, char *precision)
{
	unsigned long int num;
	char *s;

	(void)f;
	(void)len;
	(void)width;
	(void)precision;

	if (len->l == 1)
		num = va_arg(args, unsigned long int);
	else if (len->h == 1)
		num = (unsigned short int)va_arg(args, unsigned int);
	else
		num = va_arg(args, unsigned int);
	s = convert(num, 10, 0);

	return (_puts(s));
}
