#include "main.h"

/**
 * print_b - print binary on insigned int
 * @args: passed integer
 * @f: pointer to the flag struct
 * @len: pointer to the flag struct
 * @width: pointer to the flag struct
 * @precision: pointer to the flag struct
 * Return: length of printed binary
 */
int print_b(va_list args, flag *f, length_mod *len,
		char *width, char *precision)
{
	unsigned int num;
	char *s;

	(void)f;
	(void)len;
	(void)width;
	(void)precision;

	num = va_arg(args, unsigned int);
	s = convert(num, 2, 0);

	return (_puts(s));
}


/**
 * print_o - print octal of unsigned int
 * @args: passed integer
 * @f: pointer to the flag struct
 * @len: pointer to the flag struct
 * @width: pointer to the flag struct
 * @precision: pointer to the flag struct
 * Return: length of printed binary
 * Description: to calculate octal we divide by 8
 * and take the reminder and repeter
 */
int print_o(va_list args, flag *f, length_mod *len,
		char *width, char *precision)
{
	unsigned int num;
	char *s;
	int i = 0;

	(void)width;
	(void)precision;

	if (len->h == 1)
		num = (unsigned short)num;
	if (len->l == 1)
		num = (unsigned long)num;

	num = va_arg(args, unsigned int);
	s = convert(num, 8, 0);

	if (f->hash == 1 && s[0] != '0')
		i += _putchar('0');
	i += _puts(s);

	return (i);
}

/**
 * print_x - print hexadecimal (lowercase)
 * @args: passed unsigned int
 * @f: pointer to the flag struct
 * @len: pointer to the flag struct
 * @width: pointer to the flag struct
 * @precision: pointer to the flag struct
 * Return: length of printed hexadecimal string
 */
int print_x(va_list args, flag *f, length_mod *len,
		char *width, char *precision)
{
	unsigned int num = va_arg(args, unsigned int);
	int chars_printed = 0;
	char *s;

	(void)width;
	(void)precision;

	if (len->h == 1)
		num = (unsigned short)num;
	if (len->l == 1)
		num = (unsigned long)num;

	s = convert(num, 16, 0);

	if (f->hash == 1 && s[0] != '0')
		chars_printed += _puts("0x");

	chars_printed += _puts(s);

	return (chars_printed);
}

/**
 * print_X - print hexadecimal (uppercase)
 * @args: passed unsigned int
 * @f: pointer to the flag struct
 * @len: pointer to the flag struct
 * @width: pointer to the flag struct
 * @precision: pointer to the flag struct
 * Return: length of printed hexadecimal string
 */
int print_X(va_list args, flag *f, length_mod *len,
		char *width, char *precision)
{
	unsigned int num = va_arg(args, unsigned int);
	int chars_printed = 0;
	char *s;

	(void)width;
	(void)precision;

	if (len->h == 1)
		num = (unsigned short)num;
	if (len->l == 1)
		num = (unsigned long)num;

	s = convert(num, 16, 1);

	if (f->hash == 1 && s[0] != '0')
		chars_printed += _puts("0X");
	chars_printed += _puts(s);

	return (chars_printed);
}
