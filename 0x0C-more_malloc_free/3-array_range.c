#include "main.h"
#include <stdlib.h>
/**
 * array_range - creates an arry of integers
 * @min: first integer
 * @max: maximum integer
 * Return: pointer to the newly created array,Null if min > max
 * or malloc fails
 */
int *array_range(int min, int max)
{
	unsigned int n, a;
	int *ptr;

	a = 0;

	if (min > max)
		return (NULL);

	n = max - min + 1;
	ptr = malloc(n * sizeof(*ptr));

	if (ptr == NULL)
		return (NULL);

	*(ptr + a) = min;
	while (*(ptr + a) <= max)
	{
		*(ptr + a) = min;
		min++;
		a++;
	}

	return (ptr);
}
