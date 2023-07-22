#include "main.h"
#include <stdarg.h>
#include <stdlib.h>

/**
 * _printf - produce output based on a format
 * @fomrat: pointer to str
 * Return: number of printed chars
 */
int _printf(const char *format, ...)
{
	va_list args;
	int chars_printed, i;
	char specifier;

	/*defining struct array of type f_id*/

	f_id format_id[] = {
	{"c", print_c},
	{"s", print_s},
	{"%", print_percent},
	{"d", print_d},
	{"i", print_d},
	};

	if (format == NULL)
		return (-1);

	va_start(args, format);
	chars_printed = 0;

	while (*format != '\0')
	{
		if (*format == '%')
		{
			format++;
			specifier = *format;
			for (i = 0; i < format_id_size(format_id); i++)
			{
				if (specifier == *format_id[i].flag)
				{
					format_id[i].f(args);
					chars_printed++;
					break;
				}
			}
		}
		else
		{
			_putchar(*format);
			chars_printed++;
		}
		format++;
	}
	_putchar('\0');
	va_end(args);
	return (chars_printed);
}
