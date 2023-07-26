#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stddef.h>
#include <stdlib.h>

/*Structures*/

/**
 * struct flags - check for flag
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
 * struct modifiers - check lenght mods
 * @h: convert to short
 * @l: convert to long
 */
typedef struct modifiers
{
	int h;
	int l;
} length_mod;


/**
 * struct format - list of type specifiers/modifying function
 * @c: Specifier char
 * @f: ptr to operation fn
 */
typedef struct format
{
	char c;
	int (*f)(va_list, flag *f, length_mod *, char *, char *);
} s_id;

/*Functions*/
/*Callers*/
int (*get_fun(char c))(va_list, flag *, length_mod *, char *, char *);

/*print a char(using write())*/
int _putchar(char c);
int _puts(char *s);

/*print funcs per specifiers*/

/*charachters*/

/*handle char*/
int print_c(va_list args, flag *f, length_mod *len,
char *width, char *precision);
/*handle str*/
int print_s(va_list args, flag *f, length_mod *len,
char *width, char *precision);
/*handle '%'*/
int print_percent(va_list args, flag *f, length_mod *len,
char *width, char *precision);

/*number*/

/*handle dig & int*/

int print_d(va_list args, flag *f, length_mod *len,
char *width, char *precision);
/*solve the int_max issue(print number)*/
void digit_printer(long int num);
/*number counter*/
int count_digit(long int num);
/*handle unsigned int*/
int print_u(va_list args, flag *f, length_mod *len,
char *width, char *precision);

/*base-conversion*/
char *convert(unsigned long int n, int base, int cas);

/*conversions*/

/*handle binary file print_numbers*/
int print_b(va_list args, flag *f, length_mod *len,
char *width, char *precision);

/*handle octal file task3_functions*/
int print_o(va_list args, flag *f, length_mod *len,
char *width, char *precision);

/*handle Unsigned hexadecimal integer file task3_functions*/
int print_x(va_list args, flag *f, length_mod *len,
char *width, char *precision);

/*handle Unsigned hexadecimal integer upercase file task3_functions*/
int print_X(va_list args, flag *f, length_mod *len,
char *width, char *precision);

/*special string manipulation*/

/*print address*/
int print_adr(va_list args, flag *f, length_mod *len,
char *width, char *precision);

/*print rot13 of input str*/
int print_r13(va_list args, flag *f, length_mod *len,
char *width, char *precision);

/*print reversed str*/
int print_rev(va_list args, flag *f, length_mod *len,
char *width, char *precision);

/*print exclusive str*/
int print_exc(va_list args, flag *f, length_mod *len,
char *width, char *precision);

/*flags && mods*/
int get_flags(char s, flag *f);
int get_len_mod(char c, length_mod *len);
char *get_precision(char *s);
int get_precision_length(char *s);
/*printf main*/
int _printf(const char *format, ...);

int print_helper(const char *format, va_list args);
#endif /*MAIN_H*/
