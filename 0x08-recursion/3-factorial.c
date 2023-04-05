#include "main.h"
/**
 * factorial - prints the factorial of a given number
 * @n: integer
 * Return: factorial of a number n
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}

