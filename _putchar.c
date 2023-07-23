#include <unistd.h>
#include "main.h"

/**
 * _putchar - print single cahr to stdout
 * @c: input char
 * Return: 1
 */
int _putchar(char c)
{
	write(1, &c, 1);
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
