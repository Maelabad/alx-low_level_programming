#include "variadic_functions.h"

void print_int(va_list list);
void print_char(va_list list);
void print_string(va_list list);
void print_float(va_list list);


/**
* print_int - Function that prints an int
* @list: the variable argument list
* Return: Nothing
*/
void print_int(va_list list)
{
	int i;

	i = va_arg(list, int);
	printf("%d", i);
}


/**
* print_char - Function that prints a char
* @list: the variable argument list
* Return: Nothing
*/
void print_char(va_list list)
{
	char c;

	c = va_arg(list, int);
	printf("%c", c);
}


/**
* print_string - Function that prints a string
* @list: the variable argument list
* Return: Nothing
*/
void print_string(va_list list)
{
	char *s;

	s = va_arg(list, char *);
	if (s == NULL)
		printf("(nil)");
	else
		printf("%s", s);
}


/**
* print_float - Function that print a float
* @list: the variable argument list
* Return: Nothing
*/
void print_float(va_list list)
{
	float f;

	f = va_arg(list, double);
	printf("%f", f);
}



/**
* print_all - Function that prints all
* @format: The different format  i, f, c, s
* Return: Nothing
*/
void print_all(const char * const format, ...)
{
	va_list list;
	int index = 0;

	va_start(list, format);
	while (format != NULL && format[index] != '\0')
	{
		switch (format[index])
		{
			case 'i': /* int */
				print_int(list);
				break;
			case 'c': /* char */
				print_char(list);
				break;
			case 's': /* string */
				print_string(list);
				break;
			case 'f': /*float*/
				print_float(list);
				break;
			default:
				break;
		}
		if (format[index + 1] != '\0')
			printf(", ");
		index++;
	}
	printf("\n");
	va_end(list);
}
