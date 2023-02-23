#include "main.h"
/**
* print_line - print '_' n times
* @n: The number of time we should display.
* Return: Nothing
*/

void print_line(int n)
{
	int i;

	for (i = 1 ; i <= n ; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
