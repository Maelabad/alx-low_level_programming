
#include"main.h"
/**
* print_last_digit - Last digit of a number
* @n: variable representing the character
* Return: Number between 0 to 9
*/

int print_last_digit(int n)
{
	int last_digit = n % 10;

	if (last_digit < 0)
		last_digit *= -1;

	_putchar(last_digit + '0');

	return (last_digit);
}
