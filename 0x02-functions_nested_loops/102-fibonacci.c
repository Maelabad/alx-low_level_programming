#include <stdio.h>
#include "main.h"
/**
* main - Display the 50th fibonacci numbers
*
* Return: 0
*/

int main(void)
{
int i = 3;
unsigned long f1 = 1, f2 = 2, sum;

	printf("%ld, %ld, ", f1, f2);
	while (i < 50)
	{
		sum = f1 + f2;
		printf("%ld, ", sum);
		f1 = f2;
		f2 = sum;
		i++;
	}
	sum = f1 + f2;
	printf("%ld\n", sum);
return (0);
}
