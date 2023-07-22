#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stddef.h>

/*structures*/

/**
 * struct format - list of type specifiers/modifying function
 * @flag: '%' + 'char'
 * @f: fn ptr specific for each case
 */
typedef struct format
{
	char *flag;
	void (*f)(va_list);
} f_id;

extern f_id format_id[];

/*Functions*/

/*print a char(using write())*/
int _putchar(char c);

/*funcs for flags*/
void print_c(va_list args);/*handle char*/
void print_s(va_list args);/*handle str*/
void print_percent(va_list args);/*handle '%'*/
void print_d(va_list args);/*handle dig & int*/
int format_id_size(f_id *format_id);/*returns size of a f_id element*/


/*printf main*/
int _printf(const char *format, ...);
#endif /*MAIN_H*/
