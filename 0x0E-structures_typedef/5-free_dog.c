#include "dog.h"
#include "stdlib.h"
/**
 * free_dog - frees dogs struct types
 * @d: pointer to struct type dog
 *
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
