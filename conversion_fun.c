#include "main.h"

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

/**
* print_o - print octal of unsigned int
* @args: passed integer
* Return: length of printed binary
* Description: to calculate octal we divide by 8
* and take the reminder and repeter
*/
int print_o(va_list args)
{
unsigned long int num;
char *s;
int i = 0;

num = va_arg(args, unsigned long int);
s = convert(num, 8, 0);

i += _puts(s);

return (i);
}

/**
* print_x - print hexadecimal (lowercase)
* @args: passed unsigned int
* Return: length of printed hexadecimal string
*/
int print_x(va_list args)
{
unsigned long int num = va_arg(args, unsigned long int);
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
unsigned long int num = va_arg(args, unsigned long int);
int chars_printed = 0;
char *s;

s = convert(num, 16, 1);

chars_printed += _puts(s);

return (chars_printed);
}
