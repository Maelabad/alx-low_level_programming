#include <stdio.h>
#include"main.h"
/**
* main - Print the alphbet
* Return: Nothing
*/

int main(void)
{
char i;

	for (i = 'a';  i < 'z' ; i++)
	{
		_putchar(i);
		i++;
	}
	_putchar('\n');
	return (0);
}
