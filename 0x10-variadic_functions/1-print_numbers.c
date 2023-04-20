#include <stdarg.h>
#include <stdio.h>
/**
 * print_numbers - prints numbers, followed by a new line
 * @separator: string that seperates the numbers
 * @n: number of integers passed into function
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list integers;

	va_start(integers, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(integers, int));
		if (separator != NULL && i != (n - 1))
			printf("%s", separator);
	}

	printf("\n");

	va_end(integers);
}

