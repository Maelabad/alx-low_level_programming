
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
unsigned long f1 = 1, f2 = 2, sum, sum_P;

	printf("%ld, %ld, ", f1, f2);
	while (sum < 4000000)
	{
		sum = f1 + f2;
		if (sum % 2 == 0)
		{
			sum_P += sum;
		}
		f1 = f2;
		f2 = sum;
		i++;
	}
	printf("%ld\n", sum_P);
return (0);
}
