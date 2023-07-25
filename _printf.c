#include "main.h"
#include <stdarg.h>
#include <stdlib.h>

/**
 * _printf - Produce output based on a format
 * @format: pointer to str
 * Return: number of printed chars
 */
int _printf(const char *format, ...)
{
	va_list args;
	int chars_printed;

	va_start(args, format);
	if (!format || (format[0] == '%' && !format[1])) /*edge cases*/
	{
		va_end(args);
		return (-1);
	}
	if (format[0] == '%' && format[1] == ' ' && !format[2])
	{
		va_end(args);
		return (-1);
	}
	chars_printed = print_helper(format, args);
	va_end(args);
	return (chars_printed);
}

/**
 * print_helper - Helper function to process format and print characters
 * @format: pointer to str
 * @args: va_list of arguments
 * Return: number of printed chars
 */
int print_helper(const char *format, va_list args)
{
	int chars_printed = 0;
	const char *p;
	int (*p_fun)(va_list, flag *, length_mod *, char *, char *);
	flag f = {0, 0, 0};
	length_mod len = {0, 0};

	for (p = format; *p != '\0'; p++) /*loop input str*/
	{
		if (*p == '%') /*specifier check*/
		{
			p++;
			while (get_flags(*p, &f)) /*check for flag and increment*/
				p++;
			p_fun = get_fun(*p); /*print_fun call*/
			if (p_fun)
			{
				chars_printed += p_fun(args, &f, &len, "", "");
			}
			else /*test correct outputs later*/
			{
				_putchar('%');
				_putchar(*p);
				chars_printed = chars_printed + 2;
			}
		}
		else
		{
			_putchar(*p);
			chars_printed++;
		}
	}
	_putchar(-1);
	return (chars_printed);
}

