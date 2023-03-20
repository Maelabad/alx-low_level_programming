#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
* new_dog - Create a new dog
* @name: a name
* @age: an age
* @owner: an owner
* Return: A new dog
*/

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *nDog = (dog_t *)malloc(sizeof(dog_t));

	if (nDog == NULL)
		return (NULL);

	nDog->name = name;
	nDog->age = age;
	nDog->owner = owner;
	return (nDog);
}
