#include "main.h"
/**
 * _root - returns the natural square root of a number
 * @n: first integer
 *@root: second integer
 * Return: natural sqrt of a number or -1
 */
int _root(int n, int root)
{
	if (root % (n / root) == 0)
	{
		if (root * (n / root) == n)
			return (root);
		else
			return (-1);
	}
	return (0 + _root(n, root + 1));

}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: integer
 * Return: natural sqrt of a number
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 1)
		return (1);
	if (n == 0)
		return (0);
	return (_root(n, 2));

}
