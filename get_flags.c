#include "main.h"

/**
 * get_flags - flag check
 * @s: passed character after '%'
 * @f: pointer to struct flags
 * Return: 1 true || 0 false
 */
int get_flags(char s, flag *f)
{
	int i = 0;

	switch (s)
	{
		case '+':
			f->plus = 1;
			i = 1;
			break;
		case ' ':
			f->space = 1;
			i = 1;
			break;
		case '#':
			f->hash = 1;
			i = 1;
			break;
	}
	return (i);
}
