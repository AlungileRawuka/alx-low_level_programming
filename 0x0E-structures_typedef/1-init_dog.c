#include "dog.h"

/**
 * init_dog - initialises a variable oofmtype dog
 * @d: pointer to the struct dog
 * @name: string
 * @age: age of dog in float
 * @owner: string representing name of the owner
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;

}

