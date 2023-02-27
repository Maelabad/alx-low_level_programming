
#include "main.h"

/**
* print_rev - Display a String in reverse
* @s: A string to display
* Return: Nothing
*/

void print_rev(char *s)
{
	int i = 0;

	while (s[i] != 0)
		i++;

	while (i >= 0)
	{
		_putchar(s[i - 1]);
		i--;
	}
	_putchar('\n');
}
