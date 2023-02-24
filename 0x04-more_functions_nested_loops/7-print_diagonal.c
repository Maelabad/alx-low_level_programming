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

		for (j = 1 ; j <= i ; j++)
		{
			if (j < i)
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
	if (n <= 0)
		_putchar('\n');
}
