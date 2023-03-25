#ifndef MY_PRINT_H_INCLUDED
#define MY_PRINT_H_INCLUDED


#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * struct printer - A new struct type defining a printer.
 * @symbol: A symbol representing a data type.
 * @print: A function pointer to a function that prints
 *         a data type corresponding to symbol.
 */
typedef struct print
{
	char *format;
	int (*p)(va_list arg);

} Print;


int _putchar(char c);
int print_char(va_list arg);
int print_int(va_list arg);

int int_to_binary(unsigned int n);

int print_float(va_list arg);
int print_string(va_list arg);
int _printf(const char * const format, ...);


#endif
