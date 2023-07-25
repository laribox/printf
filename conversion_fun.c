#include "main.h"

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
