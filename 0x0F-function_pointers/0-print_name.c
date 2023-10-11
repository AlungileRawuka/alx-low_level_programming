#include <stdlib.h>
/**
 * print_name - prints a name
 * @name: string name
 * @f: pointer to a function
 *
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		(*f)(name);
}

