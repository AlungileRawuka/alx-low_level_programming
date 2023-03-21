#include "main.h"
/**
 *_abs - computes the absulute value of n
 *@n: positive or negative number
 *
 * Return: n if n is positive, -1 * n if negative, 0 if n is 0
 */
int _abs(int n)
{
	if (n > 0)
	{
		return (n);
	}
	else if (n < 0)
	{
		n = -1 * n;
		return (n);
	}
	else
	{
		return (0);
	}

}
