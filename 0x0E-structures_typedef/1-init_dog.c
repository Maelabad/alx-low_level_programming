#inslude "dog.h"

/**
* init_dog - Initialise a dog
* @d: a dog
* @name: a name
* @age: an age
* @owner: an owner
* Return: 0
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	(*d).name = *name;
	(*d).age = age;
	(*d).owner = *owner;
}
