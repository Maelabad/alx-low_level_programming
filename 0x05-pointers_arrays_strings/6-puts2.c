#include "main.h"

/**
* _puts2 - Display a String each 2 letters
* @str: A string to display
* Return: Nothing
*/

void _puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
		i++;
	}

	_putchar('\n');
}
