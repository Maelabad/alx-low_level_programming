#include "main.h"

/**
* _strdup - Returns a pointer to a newly allocated space in memory.
* @str: char *
* Return: An char*
*/

char *_strdup(char *str)
{
	int i = 0, j;

	while (*str)
		i++;

	char *array = malloc(sizeof(char) * i);

	for (j = 0; j < i; j++)
		array[j] = str[j];
	return (array);
}
