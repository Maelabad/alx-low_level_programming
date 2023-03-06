#include "main.h"

/**
* print_diagsums - function that prints the sum of the two diagonals of a square matrix of integers.
* @a: A int[][]
* @size: the order of  the matrix
* Return: Nothing
*/

void print_diagsums(int *a, int size)
{
	int i, j, sum1 = 0, sum2 = 0;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (i == j)
			{
				sum1 += a[i][j];
			}
		}
		sum2 += a[i][size - i -1];
	}
}


