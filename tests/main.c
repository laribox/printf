#include "main.h"
#include <stdio.h>
#include <limits.h>
#include <stddef.h>
void test (int, ...);

int main()
{
	test(1,5,11);
	return (0);
}


void test(int a ,...)
{
	int b ;
	const char *c ="*d sdfsdf";
	char *pre;
	va_list args ;
	types t = {0, NULL};

	va_start(args,a);
	b = va_arg(args,int);
	t.integer = va_arg(args,int);
	printf("%d %d \n",b, t.integer);
	pre = get_precision(c, &c);
	printf("test precision :%s\n state * pre :%d number : %d", pre, b, t.integer);
	print_precision(pre , b, t);

	printf("sdfds\n");
	va_end(args);
}
