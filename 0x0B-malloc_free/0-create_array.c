#include "main.h"

/**
* create_array - creates an array of chars initializes it with a specific char.
* @size: Number of elements of the aray
* @c: A char
* Return: An char* or NULL
*/
char *create_array(unsigned int size, char c)
{
	if (size != 0)
	{
		char *array = malloc(sizeof(char) * size);
		int unsigned i;

		for  (i = 0; i < size; i++)
			array[i] = c;
		return (array);
	}
	return (NULL);
}
