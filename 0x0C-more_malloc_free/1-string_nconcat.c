#include "main.h"

/**
* *string_nconcat - function that concatenates two strings
* @s1: The first string
* @s2: The second string
* @n: pointer to the new char *
* Return: Nothing
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *nStr;
	unsigned int len = n, i;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i]; i++)
		len++;

	nStr = malloc(sizeof(char) * (len + 1));

	if (nStr == NULL)
		return (NULL);

	len = 0;

	for (i = 0; s1[i]; i++)
		nStr[len++] = s1[i];

	for (i = 0; s2[i] && i < n; i++)
		nStr[len++] = s2[i];

	nStr[len] = '\0';

	return (nStr);
}
