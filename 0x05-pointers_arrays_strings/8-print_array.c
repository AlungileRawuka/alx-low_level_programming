#include "main.h"
#include <stdio.h>
/**
 * print_array - prints an arry of integers, seperated by comma and space
 * followed by a new line
 * @a: pointer to an arry of integers
 * @n: integer (size of the array)
 *
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", *(a + i));
		if (i != n - 1)
			printf(", ");
	}
	printf("%c", '\n');
}

