#include "main.h"
/**
 * swap_int - swaps the values of two integers
 * @a: first pointer
 * @b: second pointer
 *
 */
void swap_int(int *a, int *b)
{
	int var_a;

	var_a = *a;
	*a = *b;
	*b = var_a;


}
