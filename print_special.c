#include "main.h"

/**
 * print_r13 - print rot 13 version of input
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
int print_adr(va_list args)/*prototype to be coded*/
{
	int i;
	char *s;
	unsigned int adr;

	adr = va_arg(args, unsigned int);
	i = 0;

	s = convert(adr, 16, 0); /*convert address to hex*/
	if (s == NULL)
		return (_puts("(nil)"));


	i += _puts("0x");
	i += _puts(s);

	return (i); /*counter for printed chars*/
}
