#include <stdio.h>
#include"main.h"
/**
* print_alphabet_x10 - Print the alphbet 10 times
* Return: Nothing
*/

void  print_alphabet_x10(void)
{
char i;
	for (n = 0 ; n < 10 ; n++)
	{
		for (i = 'a';  i <= 'z' ; i++)
		{
			_putchar(i);
		}
		_putchar('\n');
	}
}
