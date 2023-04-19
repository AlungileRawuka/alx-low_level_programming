#include "function_pointers.h"
/**
 * print_name - prints a name
 * @name: name as a string
 * @f: pointer to function
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
