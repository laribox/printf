#include "main.h"
#include <stdio.h>
#include <limits.h>


int main()
{
	_printf(" %p\n ", (void*)-1);
	printf(" %p \n ", (void*)-1);
	_printf(" %p \n ",  (void*)1);
	printf(" %p \n ",  (void*)1);
	_printf(" %p\n  ",  (void*)15);
	printf(" %p\n  ",  (void*)15);
	_printf(" %p\n  ",  (void*)16);
	printf(" %p\n  ",  (void*)16);
	_printf(" %p\n  ", 17);
	printf(" %p\n  ", 17);
	_printf(" %p\n  %p\n  ", LONG_MIN, LONG_MAX);
	printf(" %p\n  %p\n  ", LONG_MIN, LONG_MAX);
	_printf(" %p\n  %p\n  ", INT_MIN, INT_MAX);
	printf(" %p\n %p\n  ", INT_MIN, INT_MAX);
	_printf(" %p\n %p\n ", ULONG_MAX, -ULONG_MAX);
	printf(" %p\n %p\n ", ULONG_MAX, -ULONG_MAX);
	_printf(" %p\n %p\n ", 0, 0);
	printf(" %p\n %p\n ", 0, 0);

	_printf("%S\n", "Best\nSchool");	
	return (0);
}
