#include "main.h"

/**
* *_strpbrk - function that searches a string for any of a set of bytes.
* @s: A char
* @accept: A char
* Return: A number of char *
*/

char *_strpbrk(char *s, char *accept)
{
	int j;

	while (*s)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (*s == accept[j])
				return (s);
		}
		s++;
	}

	return (NULL);
}
