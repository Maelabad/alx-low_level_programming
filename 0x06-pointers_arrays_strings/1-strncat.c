#include "main.h"

/**
* *_strncat - Write a function that concatenates two strings.
* @dest: A char *
* @src: A char *
* @n: An integer
* Return: char *
*/

char *_strncat(char *dest, char *src, int n);
{
	int i = 0, dest_len = 0;

	while (dest[i++])
		dest_len++;

	for (i = 0; src[i] && i < n; i++)
		dest[dest_len++] = src[i];

	return (dest);
}
