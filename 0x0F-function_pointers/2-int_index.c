#include "function_pointers.h"
#include <stdlib.h>
/**
 * int_index - searches for an integer
 * @array: pointer to an array
 * @size: size of the array
 * @cmp: pointer to a function
 * *Return: returns the index of the first element
 * for which the cmp function does not return 0
 * If no element matches or size is less than 0, return -1
 *
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int a;

	a = 0;
	if (array != NULL && cmp != NULL)
	{
		while (a < size)
		{
			if (cmp(array[a]) != 0)
			{
				return (a);
			}
			a++;
		}
	}
	return (-1);
}

