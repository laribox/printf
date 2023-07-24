#include "main.h"

/**
 * print_c - print single char
 * @args: passed char -> promoted to int
 * Return: length of output
 */
<<<<<<< HEAD
int print_c(func_args f_args)
{
	_putchar(va_arg(f_args.args, int));
=======

int print_c(func_args f_args)
{
	_putchar(va_arg(f_args.args, int));

>>>>>>> 34814d14b4a8ab9f99561a60ff463c4cc16ba48e
	return (1);
}
/**
 * print_s - print string
 * @args: passed string
 * Return: length of output
 */
<<<<<<< HEAD
=======

>>>>>>> 34814d14b4a8ab9f99561a60ff463c4cc16ba48e
int print_s(func_args f_args)
{
	char *s;
	int chars_printed;

	s = va_arg(f_args.args, char *); /*assign the varadiac argument to s*/

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
<<<<<<< HEAD
=======

>>>>>>> 34814d14b4a8ab9f99561a60ff463c4cc16ba48e
int print_percent(func_args f_args)
{
	(void)f_args;
	return (_putchar('%'));
}
