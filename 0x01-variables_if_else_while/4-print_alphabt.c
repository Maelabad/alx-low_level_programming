#include <stdio.h>
#include <stdlib.h>
/**
* main - Determine the nature of a number
* Return: Always return 0
*/

int main(void)
{
char ch;
for (ch = 'a' ; ch <= 'z' ; ch++)
{
if (ch == 'q' || ch == 'e')
{
putchar(ch);
}
}
putchar('\n');
return (0);
}
