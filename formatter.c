#include "main.h"
#include <stdio.h>
#include <stdarg.h>
#include <stddef.h>

/*defining struct array of type f_id*/

f_id format_id[] = {
	{"c", print_c},
	{"s", print_s},
	{"%", print_percent},
	{"d", print_d},
	{"i", print_d},
};
/*format_id size calculator*/
int format_id_size(void)
{
	return (sizeof(format_id) / sizeof(format_id[0]));
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
		dig = num /div;
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
