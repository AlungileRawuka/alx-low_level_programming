#include <stdarg.h>
#include "variadic_functions.h"
/**
 * sum_them_all - sums all its parameters
 * @n: number of parameters
 * Return: Sum, 0 if n == 0
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list integers;
	unsigned int i;
	int sum;

	sum = 0;
	va_start(integers, n);

	if (n == 0)
		return (0);

	for (i = 0; i < n; i++)
	{
		sum = sum + va_arg(integers, int);
	}
	va_end(integers);

	return (sum);
}

