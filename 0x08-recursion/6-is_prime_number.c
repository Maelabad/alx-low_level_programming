#include "main.h"

/**
 * is_prime_number - returns 1 if the input is prime number, otherwise 0.
 * @n: A number
 * Return: square root of a number.
 */

int is_prime_number(int n)
{
	int i = 2;

	while (i < n)
	{
		if (n % i == 0)
			return (0);
		i++;
	}
	return (1);
}
