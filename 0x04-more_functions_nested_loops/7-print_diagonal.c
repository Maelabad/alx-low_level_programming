#include "main.h"

/**
* print_diagonal - print diagonal
* @n: An integer
* Return: Nothing
*/

void print_diagonal(int n)
{
	int i;

	for (i = 1 ; i <= n ; i++)
	{
		if (i < n )
		{
			_putchar(' ');
		}
		else
		{
			_putchar('\\');
		}
	}
	_putchar('\n');
}
