#include "main.h"

/**
* swap_int - Update the value of n to 98
* @a: An pointer on an  integer
* @b: An pointer on an  integer
* Return: Nothing
*/

void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}
