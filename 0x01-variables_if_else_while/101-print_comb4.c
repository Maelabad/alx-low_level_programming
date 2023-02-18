#include <stdio.h>
#include <stdlib.h>
/**
* main - Print numbers in base 16
* Return: Always return 0
*/

int main(void)
{
int n;
int m;
int l;
for (n = 0 ; n < 8 ; n++)
{

for (m = n + 1 ; m < 9 ; m++)
{

for (l = m + 1 ; l < 10 ; l++)
{
putchar(n + '0');
putchar(m + '0');
putchar(l + '0');

if (n != 7)
{
putchar(',');
putchar(' ');
}
}

}

}

putchar('\n');
return (0);
}

