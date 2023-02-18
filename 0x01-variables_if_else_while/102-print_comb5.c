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
for (b = 0 ; b < 10 ; b++)
{
for (x = a ; x < 10 ; x++)
{
for (y = b + 1 ; y < 10 ; y++)
{
putchar(a + '0');
putchar(b + '0');
putchar(' ');
putchar(x + '0');
putchar(y + '0');

if (a == 9 && b == 8)
{
break;
}
putchar(',');
putchar(' ');

}
}
}
}
putchar('\n');
return (0);
}

