#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_numbers - prints numbers, followed by a new line
 * @separator: string to be printed between numbers
 * @n: number of integers
 *
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list  integers;
	unsigned int i;

	va_start(integers, n);
	for (i = 0; i < n; i++)
	{
		if (i > 0 && i != n && separator != NULL)
			printf("%s", separator);

		printf("%d", va_arg(integers, int));
	}
	va_end(integers);
	printf("\n");
}
