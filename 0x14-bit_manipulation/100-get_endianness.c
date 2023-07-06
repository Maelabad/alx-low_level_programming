#include "main.h"
/**
 * get_endianness - Write a function that checks the endianness.
 * Return: 1 or 0
 */
int get_endianness(void)
{
	int n = 1;
	char *end = (char *)&n;

	if (*end == 1)
		return (1);

	return (0);
}
