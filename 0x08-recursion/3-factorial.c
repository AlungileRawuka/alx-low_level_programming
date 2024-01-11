#include "main.h"
/**
 * factorial - returns the factorial of a number
 * @n: integer
 * Return: the factorial of a number n, -1 if n is lower than 0
 *
 */
int factorial(int n)
{
	int n_fact;

	if (n == 0)
		n_fact = 1;
	if (n < 0)
		n_fact = -1;

	if (n > 0)
		n_fact = n * factorial(n - 1);

	return (n_fact);
}



