#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * key_index - Get the index of a key in the hash table.
 * @key: The key string.
 * @size: The size of the hash table array.
 *
 * Return: The index where the key should be stored in the array.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash_value;

	if (key == NULL || size == 0)
		return (0);

	/* Calculate the hash value using the DJB2 algorithm */
	hash_value = hash_djb2(key);

	/* Map the hash value to an index within the array size */
	return (hash_value % size);
}
