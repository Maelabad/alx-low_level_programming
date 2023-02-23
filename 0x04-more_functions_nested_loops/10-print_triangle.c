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
		for (j = n - i ; j <= n ; j++)
		{
			_putchar(' ');
		}
		for (k = n - j  ; k <= n   ; k++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
	_putchar('\n');
}