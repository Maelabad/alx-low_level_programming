#include "main.h"

/**
* *_memcpy - fills memory with a constant byte.
* @dest: Source buffer
* @src: Destiantion buffer
* @n: A number
* Return: A number of char *
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
