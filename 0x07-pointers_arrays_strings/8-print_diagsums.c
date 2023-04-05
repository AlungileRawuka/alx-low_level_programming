#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - prints the sums of the two diagonals of a 2-D array
 * @a: pointer to a 2-D array
 * @size: size of array
 *
 */
void print_diagsums(int *a, int size)
{
	int i, total_size, sum1, sum2;

	sum1 = sum2 = i = 0;
	total_size = size * size;
	while (i < total_size)
	{
		if (i % (size + 1) == 0)
			sum1 = sum1 + *(a + i);
		if (i % (size - 1) == 0 && i != 0 && i < total_size - 1)
			sum2 = sum2 + *(a + i);
		i++;
	}
	printf("%d, %d\n", sum1, sum2);

}
