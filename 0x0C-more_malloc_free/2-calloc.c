#include "main.h"
#include <stdlib.h>
/**
 * _calloc - allocates memory for an array of nmemb elements of size bytes each
 *  and returns a pointer to the allocated memory
 *  @nmemb: unsigned integer representing the number of elements
 *  @size: unsigned integer representing the size of each element
 *  Return: pointer to the allocated memory, NULL if nmemb or size is 0
 *  or malloc fails
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int a;

	a = 0;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(nmemb * size);

	if (ptr == NULL)
		return (NULL);

	while (a < (nmemb * size))
	{
		*(ptr + a) = 0;
		a++;
	}
	return (ptr);
}

