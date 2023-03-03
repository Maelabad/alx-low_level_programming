#include "main.h"

/**
* string_toupper - All lowercase letters of a string to uppercase.
* @c: A char *
* Return: char *
*/

char *string_toupper(char *c)
{
	int i = 0;

	while (*(c + i))
	{
		if (*(c + i) >= 'a' && *(c + i) <= 'z')
			*(c + i) -= 'a' - 'A';
		i++;
	}
	return (c);
}
