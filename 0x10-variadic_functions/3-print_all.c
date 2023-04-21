#include <stdarg.h>
#include <stdio.h>
/**
 * print_all - prints anything
 * @format: list of types of arguments passed t the function
 */
void print_all(const char * const format, ...)
{
	unsigned int i, a;
	va_list args;
	char *s;

	va_start(args, format);
	i = a = 0;
	while (*(format + a) != '\0')
	{
		a++;
	}
	while (*(format + i) != '\0')
	{
		if (i > 0  && i < a && (format[i] == 'c' || format[i] == 'i' ||
					format[i] == 'f' || format[i] == 's'))
			printf(", ");
		switch (*(format + i))
		{
			case 'c':
				printf("%c", va_arg(args, int));
				break;
			case 'i':
				printf("%d", va_arg(args, int));
				break;
			case 'f':
				printf("%f", va_arg(args, double));
				break;
			case 's':
				s = va_arg(args, char *);
				if (s == NULL)
				{
					printf("(nil)");
					break;
				}
				printf("%s", s);
				break;
		}
		i++;
	}
	printf("\n");
	va_end(args);
}
