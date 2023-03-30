#include "main.h"
/**
 * reverse_array - reverses the content of an arry of integers
 * @a: pointer to an array
 * @n: size of array
 *
 */
void reverse_array(int *a, int n)
{
	int i, temp;

	i = 0;
	for (i = 0; i < (n / 2); i++)
	{
		temp = *(a + i);
		*(a + i) = *(a + n - i - 1);
		*(a + n - i - 1) = temp;
	}
}
