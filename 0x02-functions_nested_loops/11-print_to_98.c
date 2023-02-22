#include "main.h"
#include <stdio.h>
/**
* print_to_98 - Print till 98
*@n: An integer
* Return: Nothing
*/

void print_to_98(int n)
{
	if (n <= 98)
	{
		while (n <= 98)
		{
			printf("%d,", n);
			n++;
		}
	}
	else
	{
		do {
			printf("%d,", n);
			n--;
		} while  (n > 98);
	}
}
