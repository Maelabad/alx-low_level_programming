
#include"main.h"
/**
* print_last_digit - Last digit of a number
* @n: variable representing the character
* Return: Number between 0 to 9
*/

int print_last_digit(int n)
{
	i %= 10;
	if (i < 0)
	{
		i *= -1;
		i+=48;
		_putchar(i);
	}
	return (i - '0');
}
