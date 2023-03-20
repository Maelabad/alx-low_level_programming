#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
* print_dog - function that prints a struct dog
* @d: The struct to print
* Return: Nothing
*/
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (d->name == NULL  || d->owner == NULL)
		{
			if (d->name == NULL)
                		printf("Name: nil\n");
            		else
                		printf("Name: %s\n", (*d).name);
			
			printf("Age: 0\n");

            		if (d->owner == NULL)
                		printf("Owner: nil\n");
            		else
                		printf("Owner: %s\n", (*d).owner);
        	}
	printf("Name: %s\n", (*d).name);
        printf("Age: %f\n", (*d).age);
        printf("Owner: %s\n", (*d).owner);
	}
}:
