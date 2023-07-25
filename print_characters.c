#include "main.h"

/**
 * print_c - Print single char
 * @args: passed char -> promoted to int
 * @f: pointer to the flag struct
 * @len: pointer to the flag struct
 * @width: pointer to the flag struct
 * @precision: pointer to the flag struct
 * Return: length of output
 */
int print_c(va_list args, flag *f, length_mod *len,
		char *width, char *precision)
{
	(void)f;
	(void)len;
	(void)width;
	(void)precision;

	_putchar(va_arg(args, int));
	return (1);
}
/**
 * print_s - print string
 * @args: passed string
 * @f: pointer to the flag struct
 * @len: pointer to the flag struct
 * @width: pointer to the flag struct
 * @precision: pointer to the flag struct
 * Return: length of output
 */
int print_s(va_list args, flag *f, length_mod *len,
		char *width, char *precision)
{
	char *s;
	int chars_printed;

	(void)f;
	(void)len;
	(void)width;
	(void)precision;

	s = va_arg(args, char *); /*assign the varadiac argument to s*/

	if (!s) /*check s != NULL*/
		s = "(null)";

	_puts(s); /*prints the whole string*/

	chars_printed = 0;

	while (s[chars_printed]) /*calc printed chars - '\0'*/
		chars_printed++;

	return (chars_printed);
}
/**
 * print_percent - print '%'
 * @args: passed '%'
 * @f: pointer to the flag struct
 * @len: pointer to the flag struct
 * @width: pointer to the flag struct
 * @precision: pointer to the flag struct
 * Return: length of output
 */
int print_percent(va_list args, flag *f, length_mod *len,
		char *width, char *precision)
{
	(void)f;
	(void)args;
	(void)len;
	(void)width;
	(void)precision;

	return (_putchar('%'));
}
