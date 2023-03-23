#include "variadic_functions.h"
/**
 * print_strings - Function that prints strings, followed by a new line.
 * @separator: The sep to be print between strings
 * @n: the numbers of variadic elements
 * Return: Nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	char *str;
	unsigned int i;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(ap, char *);
		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);
		if ((separator != NULL) && (i < (n - 1)))
			printf("%s", separator);
	}
	printf("\n");

	va_end(ap);
}
