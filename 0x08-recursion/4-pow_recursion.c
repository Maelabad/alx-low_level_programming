#include "main.h"

/**
 * _pow_recursion - Returns the value of x raised to the power of y.
 * @x: A number
 * @y: A number
 * Return: A number
 */
int _pow_recursion(int x, int y)
{
	if (y < -1)
		return (-1);
	else if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}
