#include "main.h"

/**
* _strdup - Returns a pointer to a newly allocated space in memory.
* @str: char *
* Return: An char*
*/

char *_strdup(char *str)
{
	int i = 0, j;
	char *array;

	if (str == NULL)
		return (NULL);

	while (str[i] != '\0')
		i++;

	array = (char *)malloc((sizeof(char) * i) + 1);

	for (j = 0; j < i; j++)
		array[j] = str[j];
	array[i] = '\0';

	return (array);
}
