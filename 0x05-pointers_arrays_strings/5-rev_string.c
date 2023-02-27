#include "main.h"

/**
* rev_string - Reverse a String
* @s: A string to reverse
* Return: Nothing
*/

void rev_string(char *s)
{

	char rev = s[0];
	int i = 0, count = 0;

	while (s[count] != 0)
		count++;

	for (i = 0; i < count ; i++)
	{
		count--;
		rev = s[i];
		s[i] = s[count];
		s[count] = rev;
	}

	_putchar('\n');
}
