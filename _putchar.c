#include <unistd.h>
#include "main.h"

/**
 * _putchar - Print single cahr to stdout
 * @c: input char
 * Return: 1
 */
int _putchar(char c)
{
	static char buff[1024];
	static int idx;

	if (c == -1 || i >= 1024)
	{
		write(1, &buff, idx);
		idx = 0;
	}
	if (c != -1)
	{
		buff[idx] = c;
		idx++;
	}

	return (1);
}
/**
 * _puts - print str to stdout
 * @s: input str
 * Return: number of printed chars
 */
int _puts(char *s)
{
	register int i;

	for (i = 0; s[i] != '\0'; i++)
		_putchar(s[i]);
	return (i);
}
