#include <unistd.h>
#include "main.h"

/**
 * _putchar - print single cahr to stdout
 * @c: input char
 * Return: 1
 */
int _putchar(char c)
{
	static char buffer[1024];

	int chars_written = 0;

	if (c == '\0') /* Buffer full or end of string */
	{
		chars_written = write(1, buffer, index);
		index = 0;
	}

	if (c != '\0')
	{
		buffer[index] = c;

	}

	return (chars_written);
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
