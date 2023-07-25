#include "main.h"

/**
 * print_r13 - Print rot 13 version of input
 * @args: input str
 * @f: pointer to the flag struct
 * Return: number of printed chars
 */
int print_r13(va_list args, flag *f, length_mod *len , char* width, char *precision)
{
	char *s;
	int i, j;
	char alpha[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	(void)f;
	(void)len;
	(void)width;
	(void)precision;

	s = va_arg(args, char *);

	for (i = 0; s[i] != '\0'; i++)
	{
		if ((s[i] < 'A' || s[i] > 'Z') && (s[i] < 'a' || s[i] > 'z'))
			_putchar(s[i]); /*print non-alpha chars*/
		else
		{
			j = 0;
			while (alpha[j] != '\0')
			{
				if (s[i] == alpha[j])
					_putchar(rot[j]);/*aplly rot & print*/
				j++;
			}
		}
	}
	return (i); /*counter for printed chars*/
}

/**
 * print_adr - print a variables adress
 * @args: input variable
 * @f: pointer to the flag struct
 * Return: num of printed chars
 */
int print_adr(va_list args, flag *f, length_mod *len , char* width, char *precision)
{
	int i;
	char *s;
	unsigned long int address;

	(void)f;
	(void)len;
	(void)width;
	(void)precision;

	i = 0;
	address = va_arg(args, unsigned long int);

	if (address == 0)
		return (_puts("(nil)"));

	s = convert(address, 16, 0);

	i += _puts("0x");
	i += _puts(s); /*convert address to hex*/

	return (i); /*counter for printed chars*/
}

/**
 * print_rev - reverse a string then prints it
 * @args: input str
 * @f: pointer to the flag struct
 * Return: chars_printed
 */
int print_rev(va_list args, flag *f, length_mod *len , char* width, char *precision)
{
	char *s;
	char *p;
	int chars_printed;

	(void)f;
	(void)len;
	(void)width;
	(void)precision;

	s = va_arg(args, char *);
	p = s;

	chars_printed = 0;

	while (*p != '\0')/*mv s to the end of str*/
		p++;
	p--; /*ignores '\0'*/

	while (p >= s) /*print p until == s[0]*/
	{
		chars_printed += _putchar(*p);
		p--;
	}
	return (chars_printed);
}
/**
 * print_exc - print exclusive str
 * @args: passed str
 * @f: pointer to the flag struct
 * Return: chars_printed
 */
int print_exc(va_list args, flag *f, length_mod *len , char* width, char *precision)
{
	char *s, *p;
	int chars_printed, i;

	(void)f;
	(void)len;
	(void)width;
	(void)precision;

	chars_printed = 0;

	s = va_arg(args, char *);

	if (!s)
		return (_puts("null"));

	for (i = 0; s[i]; i++)
	{
		if (s[i] > 0 && (s[i] < 32 || s[i] >= 127))
		{
			_puts("\\x");
			chars_printed += 2;

			p = convert(s[i], 16, 1);
			if (!p[1])
				chars_printed += _putchar('0');

			chars_printed += _puts(p);
		}
		else
			chars_printed += _putchar(s[i]);
	}
	return (chars_printed);
}
