#ifndef DOG_H
#define DOG_H

/**
 * struct dog - defines the name, age and owner of an object dog
 * @name: string representing dog's name
 * @age: represents a dog's age
 * @owner: string representing the owner
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
