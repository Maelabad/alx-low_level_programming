#include "main.h"

/**
* print_array - Display n elements of an array
* @n: The numbers of elements to display
* @a: A string to display
* Return: Nothing
*/

void print_array(int *a, int n)
{
	int i = 0;

	for (i = 0; i < n; i++)
	{
		_putchar(a[i]);
		if (i < n - 1)
		{
			_putchar(',');
			_putchar(' ');
		}
	}

	_putchar('\n');
}
