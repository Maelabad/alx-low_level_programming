#include "main.h"

/**
* more_numbers - print number 0 to 14 ten times
* Return: Nothing
*/

void more_numbers(void)
{
	int i, j;

	for (i = 0 ; i < 10 ; i++)
	{
		for (j = 0 ; j < 15 ; j++)
		{
			_putchar(j);
		}
		_putchar('n');
	}
	_putchar('\n');
}
