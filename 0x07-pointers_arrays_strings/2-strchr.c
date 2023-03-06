include "main.h"

/**
* *_strchr - function that locates a character in a string.
* @s: Source buffer
* @c: A char
* Return: A number of char *
*/

char *_strchr(char *s, char c)
{
	unsigned int i = 0;
	char *p = NULL;

	for (i = 0; i < n; i++)
	{
		if (s[i] == c)
			 p = &s[i];
	}
	return (p);
}

