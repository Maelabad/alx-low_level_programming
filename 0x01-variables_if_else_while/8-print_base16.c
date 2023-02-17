#include <stdio.h>
#include <stdlib.h>
/**
* main - Print numbers in base 16
* Return: Always return 0
*/

int main(void)
{
char ch;
int n;
for (n = 0 ; n < 10 ; n++)
{
putchar(n + '0');
}

for (ch = 'a' ; ch <= 'e' ; ch++)
{
putchar(ch);
}

putchar('\n');
return (0);
}

