#include "main.h"

/**
 * print_r13 - Print rot 13 version of input
 * @args: input str
 * Return: number of printed chars
 */
int print_r13(va_list args)
{
	char *s;
	int i, j;
	char alpha[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

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
 * Return: num of printed chars
 */
int print_adr(va_list args)
{
	int i;
	char *s;
	unsigned long int address;

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
 * Return: chars_printed
 */
int print_rev(va_list args)
{
	char *s;
	char *p;
	int chars_printed;

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
