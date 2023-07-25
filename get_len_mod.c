#include "main.h"

/**
 * get_len_mod - modifier check
 * @c: checked char
 * @len: lenght modifier struct
 * Return: 1 || 0 (true || false)
 */
int get_len_mod(char c, length_mod *len)
{
	int Bool = 0;

	switch (c)
	{
		case 'h':
			len->h = 1;
			Bool = 1;
			break;
		case 'l':
			len->l = 1;
			Bool = 1;
			break;
		default:
			break;
	}
	return (Bool);
}
