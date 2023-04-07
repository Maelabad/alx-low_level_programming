#include "main.h"
/**
 * set_bit - set the bit a the index position to 1
 * @index: Index of the elements to set
 * @n: the number to print
 * Return: 1 or 0
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
	return (-1);


	*n |= (1 << index);
	return (1);
}

