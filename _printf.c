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
	const char *p;
	int (*p_fun)(va_list);

	va_start(args, format);

	if (!format || (format[0] == '%' && !format[1]))/*edge cases*/
		return (-1);
	if (format[0] == '%' && format[1] == ' ' && !format[2])
		return (-1);

	chars_printed = 0;
	for (p = format; *p != '\0'; p++) /*loop input str*/
	{
		if (*p == '%') /*specifier check*/
		{
			p++;
			p_fun = get_fun(*p); /*print_fun call*/
			if (p_fun)
			{
				chars_printed += p_fun(args); /*increment based on selected func*/
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
	va_end(args);
	return (chars_printed);
}
