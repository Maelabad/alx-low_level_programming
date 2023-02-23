#include "main.h"
/**
* main - print the largest prime factor
* Return: 0
*/

int main(void)
{
	long int nb = 612852475143;
	int largest_prime_factor = 2;

	while (nb > largest_prime_factor)
	{
		if (nb % largest_prime_factor == 0)
		{
			nb = nb / largest_prime_factor;
		}
		else
		{
			largest_prime_factor++;
		}
	}

	printf("%d\n", largest_prime_factor);
	return (0);
}
