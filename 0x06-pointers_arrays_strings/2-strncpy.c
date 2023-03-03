#include "main.h"

/**
* _strncpy - Write a function that copies a string.
* @dest: A char *
* @src: A char *
* @n: An integer
* Return: char *
*/

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; src[i] != '\0' ; i++)
		if (i < n)
			dest[i] = src[i];
	while (i < n)
		dest[i++] = '\0';

	return (dest);
}
