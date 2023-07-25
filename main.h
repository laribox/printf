#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stddef.h>
#include <stdlib.h>

/*Structures*/

/**
 * struct format - list of type specifiers/modifying function
 * @c: Specifier char
 * @f: ptr to operation fn
 */
typedef struct format
{
	char c;
	int (*f)(va_list);
} s_id;
/**
 * struct flag - check for flag
 * @plus: +
 * @space: ' '
 * @hash: #
 */
typedef struct flags
{
	int plus;
	int space;
	int hash;
} flag;
/**
 * struct modifier - check lenght mods
 * @h: convert to short
 * @l: convert to long
 */
typedef struct modifiers
{
	int h;
	int l;
}mod;

/*Functions*/
/*Callers*/
int (*get_fun(char c))(va_list);

/*print a char(using write())*/
int _putchar(char c);
int _puts(char *s);

/*print funcs per specifiers*/
/*charachters*/
int print_c(va_list args);/*handle char*/
int print_s(va_list args);/*handle str*/
int print_percent(va_list args);/*handle '%'*/

/*number*/
int print_d(va_list args);/*handle dig & int*/
void digit_printer(int num);/*solve the int_max issue(print number)*/
/*number counter*/
int count_digit(int num);
/*handle unsigned int*/
int print_u(va_list args);

/*base-conversion*/
char *convert(unsigned long int n, int base, int cas);

/*conversions*/

/*handle binary file print_numbers*/
int print_b(va_list args);

/*handle octal file task3_functions*/
int print_o(va_list args);

/*handle Unsigned hexadecimal integer file task3_functions*/
int print_x(va_list args);

/*handle Unsigned hexadecimal integer upercase file task3_functions*/
int print_X(va_list args);



/*special string manipulation*/

/*print address*/
int print_adr(va_list args);

/*print rot13 of input str*/
int print_r13(va_list args);

/*print reversed str*/
int print_rev(va_list args);

/*print exclusive str*/
int print_exc(va_list args);
/*printf main*/
int _printf(const char *format, ...);
#endif /*MAIN_H*/
