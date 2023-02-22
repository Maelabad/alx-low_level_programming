#include <stdio.h>
#include "main.h"
/**
* sum_multiples - Make the sum of multiples
* Return: Nothing
*/

void sum_multiples(void)
{
int i = 0;
int sum = 0;

	while (i < 1024)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			sum += i;
		}
		i++;
	}
	printf("%d\n", sum);
}


