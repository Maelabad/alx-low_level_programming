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
	int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
