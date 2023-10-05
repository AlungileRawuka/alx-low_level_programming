#include <stdlib.h>
/**
 * alloc_grid - returns a pointer to a 2D array of integers
 * @width: width of the array
 * @height: height of the array
 *
 * Return: pointer to the array, NULL on failure
 */
int **alloc_grid(int width, int height)
{
	int **ptr;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	ptr = malloc(sizeof(int *) * height);

	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		ptr[i] = malloc(sizeof(int) * width);
		if (ptr[i] == NULL)
			return (NULL);
		for (j = 0; j < width; j++)
		{
			ptr[i][j] = 0;
		}
	}

	return (ptr);
}

