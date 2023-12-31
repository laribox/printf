#include "main.h"

/**
 * get_fun - Fn pointer to list element
 * @c: passed specifier
 * Return: ptr to desired fn
 */
int (*get_fun(char c))(va_list, flag *, length_mod *, char *, char *)
{
	s_id spec_ptr[] = {
		{'c', print_c},
		{'s', print_s},
		{'%', print_percent},
		{'d', print_d},
		{'i', print_d},
		{'b', print_b},
		{'u', print_u},
		{'o', print_o},
		{'x', print_x},
		{'X', print_X},
		{'p', print_adr},
		{'R', print_r13},
		{'r', print_rev},
		{'S', print_exc}
	};
	int A_size = 14;
	int i = 0;

	while (i < A_size)
	{
		if (spec_ptr[i].c == c)
			return (spec_ptr[i].f);
		i++;
	}
	return (NULL);
}
