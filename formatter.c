#include "main.h"
#include <stdio.h>
#include <stdarg.h>
#include <stddef.h>

/**
 * format_id_size - Calculate the size of
 * an struct aray
 * @format_id: pointer to the struct array
 * Return: the size of the struct array
 */
int format_id_size(f_id *format_id)
{
	int count = 0;

	while (format_id[count].flag != NULL)
	{
		count++;
	}
	return (count);
}

/**
 * print_d - print decimal or integer
 * @args: passed integer
 */
void print_d(va_list args)
{
	int num;
	int div, dig;

	num = va_arg(args, int);
	if (num < 0)
	{
		_putchar('-');
		num = -num;
	}

	div = 1;
	while (num / div > 9)
		div *= 10;

	while (div > 0)
	{
		dig = num / div;
		_putchar('0' + dig);
		num %= div;
		div /= 10;
	}
}
/**
 * print_c - print single char
 * @args: passed char -> promoted to int
 */
void print_c(va_list args)
{
	char c;

	c = va_arg(args, int);
	_putchar(c);
}
/**
 * print_s - print string
 * @args: passed string
 */
void print_s(va_list args)
{
	const char *s;

	s = va_arg(args, char *);
	while (*s != '\0')
	{
		_putchar(*s);
		s++;
	}
}
/**
 * print_percent - print '%'
 * @args: passed '%'
 */
void print_percent(va_list args)
{
	(void)args;
	_putchar('%');
}
