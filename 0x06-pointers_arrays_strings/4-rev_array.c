#include "main.h"

/**
* reverse_array - Function that reverses the content of an array of integers.
* @a: An array
* @n: An integer
* Return: Nothing
*/

void reverse_array(int *a, int n)
{
	int simp = 0, i;

	for (i = 0; i < n / 2; i++)
	{
		simp = a[i];
		a[i] = a[n - i];
		a[n - i] = simp;
	}
}
