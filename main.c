#include <limits.h>
#include <stdio.h>
#include "main.h"
#define ZERO 0

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    int len;
    int len2;
    unsigned int ui;
    void *addr;
    int n1;
    int n2;

    n1 = 0;
    n2 = 0;



    ui = (unsigned int)INT_MAX + 1024;
    addr = (void *)0x7ffe637541f0;
    _printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
    printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
      _printf("Address:[%p]\n", addr);
    printf("Address:[%p]\n", addr);
    
       len = _printf("Percent:[%%]\n");
    len2 = printf("Percent:[%%]\n");
    _printf("Len:[%d]\n", len);
    printf("Len:[%d]\n", len2);

    _printf("Binary:[%b]\n", 98);
    printf("Binary:[%b]\n", 98);
    _printf("Decimal:[%i]\n", 58);
    printf("Decimal:[%i]\n", 58);
    _printf("Decimal:[%i]\n", 524);
    printf("Decimal:[%i]\n", 524);
    _printf("Negative Decimal:[%i]\n", -58);
    printf("Negative Decimal:[%i]\n", -58);
    _printf("Zero:[%i]\n", 0);
    printf("Zero:[%i]\n", 0);
    _printf("hello:[%i]\n", "He");
    printf("hello:[%i]\n", "Hello");
    _printf("NULL:[%i]\n", NULL);
    printf("NULL:[%i]\n", NULL);
    _printf("INT_MAX: [%i]\n", INT_MAX);
    printf("INT_MAX: [%i]\n", INT_MAX);
    _printf("INT_MIN: [%i]\n", INT_MIN);
    printf("INT_MIN: [%i]\n", INT_MIN);

    n1 = _printf("Number: [%d], [%i]\n", 4034, 4034);
    n2 = printf("Number: [%d], [%i]\n", 4034, 4034);
    printf("Len:[%d]\n", n1);
    printf("Len1:[%d]\n\n", n2);

    n1 = _printf("Negative: [%i], [%d]\n", -4034, -4034);
    n2 = printf("Negative: [%i], [%d]\n", -4034, -4034);
    printf("Len:[%d]\n", n1);
    printf("Len1:[%d]\n\n", n2);

    n1 = _printf("long: [%i], [%d]\n", 4545439394949595, 4545439394949595);
    n2 = printf("long: [%i], [%d]\n", 4545439394949595, 4545439394949595);
    printf("Len:[%d]\n", n1);
    printf("Len1:[%d]\n\n", n2);

    n1 = _printf("Greater than int: [%i], [%d]\n", 454543939494, 454543939494);
    n2 = printf("Greater than int: [%i], [%d]\n", 454543939494, 454543939494);
    printf("Len:[%d]\n", n1);
    printf("Len1:[%d]\n\n", n2);

    n1 = _printf("N-Greater than int: [%i], [%d]\n", -454543939494, -454543939494);
    n2 = printf("N-Greater than int: [%i], [%d]\n", -454543939494, -454543939494);
    printf("Len:[%d]\n", n1);
    printf("Len1:[%d]\n\n", n2);

    n1 = _printf("long: [%i], [%d]\n", -4545439394949595, -4545439394949595);
    n2 = printf("long: [%i], [%d]\n", -4545439394949595, -4545439394949595);
    printf("Len:[%d]\n", n1);
	return (0);
}
