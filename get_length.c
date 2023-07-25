#include "main.h"

/**
 * get_length - length check
 * @s: passed character after '%'
 * @l: pointer to struct length_mod
 * Return: 1 true || 0 false
 */
int get_length(char s, length_mod *len)
{
	int i = 0;

	switch (s)
	{
		case 'h':
			len->h = 1;
			i = 1;
			break;
		case 'l':
			len->l = 1;
			i = 1;
			break;
	}
	return (i);
}
