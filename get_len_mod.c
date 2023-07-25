#include "main.h"

/**
 * get_len_mod - modifier check
 * @
 * @
 * Return: 1 || 0 (true || false)
 */
int get_len_mod(char c, length_mod *m)
{
	int b = 0;

	switch (c)
	{
		case 'h':
			m->h = 1;
			b = 1;
			break;
		case 'l':
			m->l = 1;
			b = 1;
			break;
		default:
			break;
	}
	return (b);
}
