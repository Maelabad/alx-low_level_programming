#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
* main - Determine the nature of a number
* Return: Always return 0
*/

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	int nb = n % 10;
	if (nb == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, nb);
	}
	else if (n < 6)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, nb);
	}
	else if (n > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, nb);

	}

	return (0);
}
