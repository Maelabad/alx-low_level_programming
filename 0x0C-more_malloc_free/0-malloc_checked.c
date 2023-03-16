#include "main.h"

/**
* *malloc_checked -  function that allocates memory using malloc
* @b: size that should be allocate
*
* Return: Nothing
*/
void *malloc_checked(unsigned int b)
{
	void *val = malloc(b);
	int *a;
	*a = 98;

	if (val == NULL)
		return (a);
	else
		return (val);
}
