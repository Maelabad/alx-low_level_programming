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

	if (val == NULL)
		exit(98);
	return (val);
}
