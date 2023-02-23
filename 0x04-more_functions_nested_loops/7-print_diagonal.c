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
		_putchar(' ');
		if (i == n)
		{
			_putchar('\');
		}
	}
	_putchar('\n');
}
