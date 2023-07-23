#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stddef.h>
#include <stdlib.h>

/*structures*/

/**
 * struct format - list of type specifiers/modifying function
 * @c: specifier char
 * @f: ptr to operation fn
 */
typedef struct format
{
	char c;
	int (*f)(va_list);
} s_id;

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

int print_b(va_list args);/*handle binary file print_numbers*/

/*printf main*/
int _printf(const char *format, ...);
#endif /*MAIN_H*/

