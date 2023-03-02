#include "main.h"

/**
* *_strcat - Update the value of n to 98
* @dest: A char *
* @src: A char *
* Return: Nothing
*/

char *_strcat(char *dest, char *src);
{
	int i = 0, dest_len = 0;

	while (dest[i]!='\0')
	{
		dest_len++;
	}

	for (i = 0; src[i] != '\0' ; i++)
		dest[dest_len++] = src[i];

	return (dest);
}
