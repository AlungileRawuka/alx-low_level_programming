#include "function_pointers.h"
#include <stdlib.h>
/**
 * array_iterator - executes a function given as a parameter
 * on each element of an array
 * @array: pointer to an array of inters
 * @size: size of the array
 * @action: pointer to a function
 *
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int a;

	a = 0;
	if (array != NULL && action != NULL)
	{
		while (a < size)
		{
			action(array[a]);
			a++;
		}
	}
}


