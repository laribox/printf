#include "main.h"

/**
 * convert - Converts input num to input base Lower or Upper
 * @n: input number
 * @base: input base
 * @cas: LorU for hex || HEX
 * Return: ptr to result str
 */
char *convert(unsigned long int n, int base, int cas)
{
	static char *UorL;
	static char buff[50];
	char *p;

	p = &buff[49];
	*p = '\0';

	UorL = (cas) ? "0123456789ABCDEF" : "0123456789abcdef";
	/*cas == 1 ->uppercase*/

	do {
		*--p = UorL[n % base];
		n /= base;
	} while (n != 0);

	return (p);
}
