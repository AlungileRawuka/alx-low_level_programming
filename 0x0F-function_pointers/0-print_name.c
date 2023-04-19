#include "function_pointers.h"
#include <stdlib.h>
/**
 * print_name - prints a name
 * @name: name as a string
 * @f: pointer to function
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
