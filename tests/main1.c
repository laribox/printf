#include <stdio.h>
#include "main.h"


int main()
{


	_printf("Positive: %10d %10ld\n", 123,500);
	_printf("Positive: %10d %hd\n", 123,600000);
	printf("Positive: %10d %d\n", 123,-1);

/*	_printf("Negative: %d\n", -456);
	printf("Negative: %d\n", -456);

	printf("Large: %d\n", 2147483647);
	printf("Large: %d\n", 2147483647);
	_printf("Small: %d\n", -2147483648);
	printf("Small: %d\n", -2147483648);


	_printf("Single Character: %d\n", 7);
	printf("Single Character: %d\n", 7);


	_printf("Multiple: %d and %i\n", 123, -456);
	printf("Multiple: %d and %i\n", 123, -456);


	_printf("No specifier here.\n");
	printf("No specifier here.\n");


	_printf("Special Characters: \\n = %d, \\t = %i\n", '\n', '\t');
	printf("Special Characters: \\n = %d, \\t = %i\n", '\n', '\t');

	_printf("binary 17 = %b\n", 17);
	printf("binary 17 = %b\n", 17);

	_printf("oct 30 = %o\n", 30);
	printf("oct 30 = %o\n", 30);

	_printf("rot13: HellO is %R\n", "HellO");
	printf("rot13: HellO is %R\n", "HellO");

	_printf("hex 10 = %x\n", 10);
	printf("hex 10 = %x\n", 10);

	_printf("HEX 12 = %X\n", 12);
	printf("HEX 12 = %X\n", 12);

	_printf("Very Large: %d\n", 999999999);
	printf("Very Large: %d\n", 999999999);

 _printf("length lu : %lu\n", 1844674407370955160);
 printf("length lu : %lu\n", 1844674407370955160);
 _printf("length ld : %lu\n", 0);
 printf("length ld : %lu\n", 0);
 _printf("length ld : %hu\n", 0);
 printf("length ld : %hu\n", 0);
 _printf("length lu : %hu\n", 65535);
 printf("length lu : %hu\n", 65535);

 _printf("length ld : %ld  hi : %hi\n",-9223372036854775805,-32770);
 printf("length ld : %ld  hi : %hi\n",-9223372036854775805,-32770);
 printf("\n");
 _printf("length : %hd  %i\n",32770,2147483650);
 printf("length : %hd  %i\n",32770,2147483650);
 printf("\n");
 _printf("length : %i\n",2147483650);
 printf("length : %i\n",2147483650);

 Note: The wide characters test cases are omitted for standard printf*/

	return 0;
}
