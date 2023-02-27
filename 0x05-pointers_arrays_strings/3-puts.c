#include "main.h"

/**
* _puts - Display a String
* @str: A string to display
* Return: Nothing
*/

void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0') 
		_putchar(str[i]);

	_putchar('\n');
}
