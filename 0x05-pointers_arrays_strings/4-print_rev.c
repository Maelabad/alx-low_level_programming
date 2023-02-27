
#include "main.h"

/**
* _puts - Display a String
* @str: A string to display
* Return: Nothing
*/

void _puts(char *s)
{
	int i = 1;

	while (s[i] != 0)
		i++;

	while (i > 0)
		_putchar(str[i]);
		i--;

	_putchar('\n');
}
