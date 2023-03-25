#include "main.h"

/**
* *_strchr - function that locates a character in a string.
* @s: Source buffer
* @c: A char
* Return: A number of char *
*/

char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (c == *s)
			return (s);
		s++;
	}
	if (c == *s)
		return (s);
	return (NULL);
}
