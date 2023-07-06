#include "main.h"

/**
 * binary_to_uint - Convert bin to int
 * @b: Contain a binary number
 * Return: Always 0.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int res = 0, pow;
	int count = 0, i = 0, j = 0;

	if (b == NULL)
	{
		return (0);
	}

	while (b[count])
	{
	if (b[count] == '1' || b[count] == '0')
		count++;
	else
		return (0);
	}

	for (i = 0; i < count; i++)
	{
		if (b[i] == '1')
		{
			pow = 1;
			j = i;
			while (j < count - 1)
			{
				pow *= 2;
				j++;
			}
			res += pow;
		}
	}
	return (res);
}
