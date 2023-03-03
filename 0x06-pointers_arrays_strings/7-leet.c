#include "main.h"

/**
* leet - Write a function that encodes a string into 1337.
* @c: A char *
* Return: char *
*/

char *leet(char *c)
{
	int i = 0, j;
	char a[] = "aAeEoOtTlL";
	char b[] = "4433007711";

	for (i = 0; *(c + i); i++)
	{
		for (j = 0; j <= 9; j++)
		{
			if (a[j] == c[i])
				c[i] = b[j];
		}
	}
	return (c);
}
