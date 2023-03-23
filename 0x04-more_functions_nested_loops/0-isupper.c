#include "main.h"
/**
 * _isupper - returns 1 if a character is uppercase, 0 otherwise
 *@c: character to be checked if it is lowercase or uppercase
 *
 * Return: 1 if c is uppercase, 0 otherwise
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);

}
