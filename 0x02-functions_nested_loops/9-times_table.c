#include"main.h"
/**
* times_table - Print the time table
*
* Return: Nothing
*/

void times_table(void)
{
int i, j, x;
	for (i = 0 ; i < 24 ; i++)
	{
		for (j = 0 ; j < 60 ; j++)
		{
			x = i * j;
			if (x >= 10)
			{
				_putchar(x / 10 + '0');
				x = x % 10;
			}
			_putchar(x + '0');
			if (j < 9)
			{
			_putchar(',');
			}
			_putchar(' ');
		}
		_putchar('\n');
	}
}
