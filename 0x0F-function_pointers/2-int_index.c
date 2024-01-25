#include "function_pointers.h"
/**
 * int_index - searches for an integer
 * @array: array of integers
 * @size: size of the array
 * @cmp: pointer to a function
 * Return: returns an index to the first element for which cmp
 * does not return 0, -1 if no element matches or if size <= 0
 */
int int_index(int *array, int size, int (*cmp)(int))

{
	int i;

	if (!array || !cmp || size <= 0)
		i = -1;

	if (array && cmp)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]))
				break;
		}
	}

	if (i == size)
		i = -1;

	return (i);
}

