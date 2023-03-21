#include "main.h"
/**
 * _islower - returns 1 if a character is lowercase, 0 otherwise
 *@c: character to be checked if it is lowercase or uppercase
 *
 * Return: 1 if c is lowercase, 0 otherwise
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);

}

