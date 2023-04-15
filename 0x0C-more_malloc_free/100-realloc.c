#include "main.h"
#include <stdlib.h>
/**
 *_realloc - reallocates a memory block using malloc and free
 *@ptr: pointer to the memory previously allocated with a call to malloc
 *@old_size: is the size, in bytes, of the allocated space for ptr
 *@new_size: is the new size, in bytes of the new memory block
 *Return: pointer to the newly allocated space, NULL if fails
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
	{
		ptr = malloc(new_size);
		if (ptr == NULL)
			return (NULL);
	}


	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	free(ptr); /*Free memory previously allocated to old_size*/

	ptr = malloc(new_size); /*reallocate memory to size new_size*/
	if (ptr == NULL)
		return (NULL);

	return (ptr);
}
