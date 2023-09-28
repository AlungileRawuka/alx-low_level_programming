#include "main.h"
/**
 * _strlen_recursion - returns the length of a string
 * @s: string
 *
 * Return: Length of a string as an int
 */
int _strlen_recursion(char *s)
{
	int n;

	if (*(s + 0) == '\0')
		n = 0;

	if (*(s + 0) != '\0')
	{
		s++;
		n =  _strlen_recursion(s) + 1;
	}
	return (n);
}
