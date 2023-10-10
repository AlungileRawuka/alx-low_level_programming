#include "stdlib.h"
#include "dog.h"
/**
 * new_dog - creates a new dog
 * @name: string name of dog
 * @age: float type age of dog
 * @owner: string type owner of dog
 *
 * Return: struct new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *my_dog;
	int i, j, c;
	char *cpy_name, *cpy_owner;

	i = j = c = 0;
	my_dog = malloc(sizeof(dog_t));
	if (my_dog == NULL)
		return (NULL);
	while (*(name + i) != '\0')
		i++;
	while (*(owner + j) != '\0')
		j++;
	cpy_name = malloc(sizeof(char) * (i + 1));
	if (cpy_name == NULL)
	{
		free(my_dog);
		return (NULL);
	}
	cpy_owner = malloc(sizeof(char) * (j + 1));
	if (cpy_owner == NULL)
	{
		free(cpy_name);
		free(my_dog);
		return (NULL);
	}
	while (c < i)
	{
		*(cpy_name + c) = *(name + c);
		c++;
	}
	c = 0;
	while (c < j)
	{
		*(cpy_owner + c) = *(owner + c);
		c++;
	}
	my_dog->name = name;
	my_dog->age = age;
	my_dog->owner = owner;
	return (my_dog);
}
