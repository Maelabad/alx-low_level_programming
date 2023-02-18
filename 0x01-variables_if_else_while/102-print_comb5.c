#include <stdio.h>
#include <stdlib.h>
/**
* main - Print numbers in base 16
* Return: Always return 0
*/

int main(void)
{
short a, b;
short x, y;
for (a = 0 ; a < 10 ; a++)
{
for (b = a + 1 ; b < 10 ; b++)
{
for (x = b + 1 ; x < 10 ; x++)
{
for (y = x + 1 ; y < 10 ; y++)
{
putchar(a + '0');
putchar(b + '0');
putchar(' ');
putchar(x + '0');
putchar(y + '0');

if (a != 9 && b != 8)
{
putchar(',');
putchar(' ');
}
}
}
}
}
putchar('\n');
return (0);
}

