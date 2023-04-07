#include "main.h"
/**
 * clear_bit - function that sets the value of a bit to 0 at a given index.
 * @index: Index of the elements to set
 * @n: the number to modify
 * Return: 1 if succes -1 if fails
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	*n &= ~(1 << index);
	return (1);
}
