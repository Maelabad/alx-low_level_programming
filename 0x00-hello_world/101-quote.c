#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
* main - Entry point
* Return: Always return 1
*/


int main(void)
{
	char str[60] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";
	int i;
	for (i = 0; i < 60 ; i++)
	{
		putc(str[i], stdout);
	}

return (1);
}
