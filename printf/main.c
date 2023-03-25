#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */

int main(void)
{
    unsigned int number = 98;
    int s;
    s = int_to_binary(number);
    printf("the size is : %d",s);
    return (0);
}

/*
int main(void)
{
    int len;
    int len2;
   
    len = _printf("Let's try to printf a simple sentence.\n");
    len2 = printf("Let's try to printf a simple sentence.\n");
    _printf("Length:[%d, %i]\n", len, len);
    printf("Length2:[%d, %i]\n", len2, len2);
    


    return (0);

}
*/










/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

int main(void)
{
 
    _printf("On ne doit pas utiliser printf %s %d %c ", "Une chaine ",141, 'D');
    
    return (0);
}
*/