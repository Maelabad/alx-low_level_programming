#include "main.h"

/**
 * _sqrt_recursion - function that returns the natural square root of a number.
 * @n: A number
 * Return: square root of a number.
 */

int _sqrt_recursion(int n)
{
	int i = 0, mul = 0;

	while (mul <= n)
	{
		mul = i * i;
		if (mul == n)
			return (i);
		i++;
	}
	return (-1);
}
