#include "main.h"

/**
* print_diagonal - print diagonal
* @n: An integer
* Return: Nothing
*/

void print_diagonal(int n)
{
	int i, j;

	for (i = 1 ; i <= n ; i++)
	{

		for (j = n - i ; j <= n ; j++)
		{
			if (j < n)
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
}
