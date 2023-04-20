#include <stdarg.h>
#include "variadic_functions.h"
/**
 * sum_them_all - sums all of its parameters
 * @n: first integer of type unsigned int
 * Return: sum of all the parameters, 0 if n is 0
 */
int sum_them_all(const unsigned int n, ...)
{
	int sum;
	unsigned int i;
	va_list num;

	va_start(num, n);
	sum = 0;
	if (n == 0)
		return (0);
	for (i = 0; i < n; i++)
		sum = sum + va_arg(num, int);
	va_end(num);
	return (sum);
}


