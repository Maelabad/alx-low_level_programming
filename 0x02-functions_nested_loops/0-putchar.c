#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "main.h"
/**
* main - Print a String
* Return: Always return 0
*/

int main(void)
{
	char str[9] = "_putchar\n";
	int i = 0;

	while (i < 9)
	{
		_putchar(str[i]);
		i++;
	}
	return (0);
}

