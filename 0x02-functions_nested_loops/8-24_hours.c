#include"main.h"
/**
* jack_bauer - Print each minutes in a day
*
* Return: Nothing
*/

void jack_bauer(void)
{
int i, j, x;
	for (i = 0 ; i < 24 ; i++)
	{
		for (j = 0 ; j < 60 ; j++)
		{
			x = i / 10;
			_putchar(x + '0');
			x = i % 10;
			_putchar(x + '0');
			_putchar(':');
			x = j / 10;
			_putchar(x + '0');
			x = j % 10;
			_putchar(x + '0');
			_putchar('\n');
		}

	}
}
