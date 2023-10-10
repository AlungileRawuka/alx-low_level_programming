#ifndef DOG_H
#define DOG_H

/**
 * struct dog - struct for type dog
 * @name: name of dog
 * @age: age of dog
 * @owner: dog owner
 *
 * Description: struct dog with the elements name, age and owner.
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
/**
 * struct dog_t - struct giving a  new name for the struct dog
 * @name: string name
 * @age: float age
 * @owner: string owner name
 *
 * Description: struct giving a new name to struct dog
 */
typedef struct dog_t
{
	char *name;
	float age;
	char *owner;
} dog;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
