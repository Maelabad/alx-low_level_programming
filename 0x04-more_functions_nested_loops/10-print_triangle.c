#include "main.h"

/**
* print_triangle - print a triangle
* @n: An integer
* Return: Nothing
*/

void print_triangle(int n)
{
	int i, j, k;

	for (i = 1 ; i <= n ; i++)
	{
		for (j = i ; j < n ; j++)
		{
			_putchar(' ');
		}
		for (k = 1  ; k <= i   ; k++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
	if (n <= 0)
		_putchar('\n');
}
