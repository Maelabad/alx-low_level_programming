#include "main.h"

/**
* puts_half - Display a the 2nd half of a String
* @str: A string to display
* Return: Nothing
*/

void puts_half(char *str)
{
	int i = 0, count = 0, start = 0;

	while (str[count] != '\0')
	{
		count++;
	}

	if (count % 2 == 0)
		start = count / 2;
	else
		start = (count - 1) / 2;


	for (i = start; i < count; i++)
	{
		_putchar(str[i]);
	}

	_putchar('\n');
}
