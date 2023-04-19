#include "dog.h"
#include <stdlib.h>
/**
 * init_dog - initialises a variable of type dog
 * @d: pointer to the struct dog
 * @name: string
 * @age: age of dog in float
 * @owner: string representing name of the owner
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}

}

