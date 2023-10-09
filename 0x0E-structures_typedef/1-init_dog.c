#include "dog.h"
/**
 * init_dog - initialises a variable of type dog
 * @d: pointer the struct dog
 * @name: string name
 * @age: float type indicating age
 * @owner: string owner name
 *
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
