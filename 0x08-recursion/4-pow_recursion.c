#include "main.h"

/**
 * _pow_recursion - returns the value of x, raised to the power of y
 * @x: integer
 * @y: integer
 * Return: the value of x, raised to the power of y, -1 if y is less than 0
 *
 */
int _pow_recursion(int x, int y)
{
	int n_pow;

	if (y < 0)
		n_pow = -1;
	if (y == 0)
		n_pow = 1;
	if (y == 1)
		n_pow = x;

	if (y > 1)
	{
		n_pow = x * _pow_recursion(x, y - 1);
	}

	return (n_pow);
}

