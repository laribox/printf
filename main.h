#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stddef.h>
#include <stdlib.h>

/*structures*/

/**
 * struct arguments - flag precision etc...
 * @args: the args passed for printf
 * @flags: flag used 
 */
typedef struct arguments
{
	va_list args;
	char flags;
} func_args;

/**
 * struct format - list of type specifiers/modifying function
 * @c: specifier char
 * @f: ptr to operation fn
 */
typedef struct format
{
	char c;
	int (*f)(func_args);
} s_id;


/*Functions*/
/*Callers*/
int (*get_fun(char c))(func_args);


/*print a char(using write())*/
int _putchar(char c);
int _puts(char *s);

/*print funcs per specifiers*/
/*charachters*/

int print_c(func_args f_args);/*handle char*/
int print_s(func_args f_args);/*handle str*/
int print_percent(func_args f_args);/*handle '%'*/

/*number*/
int print_d(func_args f_args);/*handle dig & int*/

int digit_printer(int num);/*solve the int_max issue(print number)*/



/*base-conversion*/
char *convert(unsigned long int n, int base, int cas);

/*conversions*/

/*handle binary file print_numbers*/
int print_b(func_args f_args);

/*handle octal file task3_functions*/
int print_o(func_args f_args);

/*handle Unsigned hexadecimal integer file task3_functions*/
int print_x(func_args f_args);



/*handle unsigned int file task3_functions*/
int print_u(func_args f_args);


/*special string manipulation*/
int print_adr(func_args f_args);/*print address*/
int print_r13(func_args f_args);/*print rot13 of input str*/

/*print reversed str*/
int print_rev(func_args f_args);
/*printf main*/
int _printf(const char *format, ...);
#endif /*MAIN_H*/
