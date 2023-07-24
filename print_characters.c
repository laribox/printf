#include "main.h"

/**
 * print_c - Print single char
 * @args: passed char -> promoted to int
 * Return: length of output
 */
int print_c(va_list args)
{
	_putchar(va_arg(args, int));
	return (1);
}
/**
 * print_s - print string
 * @args: passed string
 * Return: length of output
 */
int print_s(va_list args)
{
	char *s;
	int chars_printed;

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
 * Return: length of output
 */
int print_percent(va_list args)
{
	(void)args;
	return (_putchar('%'));
}