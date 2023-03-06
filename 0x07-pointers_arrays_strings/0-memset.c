#include "main.h"

/**
* *_memset - fills memory with a constant byte.
* @s: A buffer (char *)
* @b: A constant byte
* @n: A number
* Return: A number of char *
*/

char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
