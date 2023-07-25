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
	int chars_printed;

	chars_printed = 0;
	num = va_arg(args, int);

	chars_printed += count_digit(num);/*counts digit number*/

	if (num < 0)
		chars_printed++;

	digit_printer(num);

	return (chars_printed);
}
/**
 * digit_printer - print input number by digit
 * @num: input number
 * Return: print count
 */
void digit_printer(int num)
{
	unsigned int x;

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
 *
 * Return: the number of digits
 */
int count_digit(int num)
{
	unsigned int count = 0;
	unsigned int n1;

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
* Return: length of printed unsigned int
*/
int print_u(va_list args)
{
	unsigned int num;
	char *s;	

	num = va_arg(args, unsigned int);
	s = convert(num, 10, 0);

	return (_puts(s));
}
