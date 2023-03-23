#include "variadic_functions.h"
/**
 * print_numbers - Function that prints numbers, followed by a new line.
 * @separator: The sep to be print between numbers
 * @n: the numbers of variadic elements
 * Return: Nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(ap, int));
		if ((separator != NULL) && (i < (n - 1)))
			printf("%s", separator);
	}
	printf("\n");

	va_end(ap);
}
