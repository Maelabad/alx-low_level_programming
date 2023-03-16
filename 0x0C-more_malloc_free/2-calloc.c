#include "main.h"

/**
* _calloc - function that allocates memory for an array, using malloc.
* @nmemb: The type of the array
* @size: The number of element
* Return: void *
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char  *str;

	void *array = malloc(sizeof(nmemb) * size);

	if (nmemb == 0 || size == 0)
		return (NULL);

	if (array == NULL)
		return (NULL);

	str = array;

	while (*str)
		*str = '\0';

	return (array);
}
