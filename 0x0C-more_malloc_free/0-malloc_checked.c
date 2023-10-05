#include <stdlib.h>
/**
 * malloc_checked - allocates memory using malloc
 * @b: unsigned int size of the space to be allocated
 *
 * Return: pointer to the alllocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
	if (p == NULL)
		exit(98);

	return (p);
}
