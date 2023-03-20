#include <stdio.h>
#include <stdlib.h>
#include <string.h>
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
	char *dName, *dOwner;

	dName = (char *)malloc(sizeof(char) * strlen(name));
	dOwner = (char *)malloc(sizeof(char) * strlen(owner));
	
	if (dName == NULL || dOwner == NULL)
		return NULL;

	strcpy(dName, name);
	strcpy(dOwner, owner);

	dog_t *nDog = (dog_t *)malloc(sizeof(dog_t));

	if (nDog == NULL)
		return (NULL);

	nDog->name = dName;
	nDog->age = age;
	nDog->owner = dOwner;
	return (nDog);
}
