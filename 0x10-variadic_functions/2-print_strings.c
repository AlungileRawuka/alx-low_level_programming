#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - prints strings, followed by a new line
 * @separator: string to be printed between the strings
 * @n: number of strings to be printed
 *
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strings;
	unsigned int i;
	char *str;

	va_start(strings, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(strings, char *);
		if (i > 0 && i != n && separator != NULL)
			printf("%s", separator);

		if (str == NULL)
			printf("%s", "nil");

		else
			printf("%s", str);

	}
	va_end(strings);
	printf("\n");

}
