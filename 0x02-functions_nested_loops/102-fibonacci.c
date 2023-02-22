#include <stdio.h>
#include "main.h"
/**
* main - Display the 50th fibonacci numbers
*
* Return: 0
*/

int main(void)
{
int i = 4;
int f1 = 1, f2 = 2, sum;

	printf("%d, %d, ", f1, f2);
	while (i < 50)
	{
		sum = f1 + f2;
		printf("%d, ", sum);
		f1 = f2;
		f2 = sum;
		i++;
	}
	printf("%d\n", sum);
return (0);
}
