
#include"main.h"
/**
* print_last_digit - Last digit of a number
* @n: variable representing the character
* Return: Number between 0 to 9
*/

int print_last_digit(int n)
{
	n %= 10;
	if (n < 0)
	{
		n *= -1;
		n += 48;
		_putchar(n);
	}
	return (n - '0');
}
