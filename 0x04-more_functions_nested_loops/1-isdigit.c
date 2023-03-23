#include "main.h"
/**
 * _isdigit - returns 1 if a character is a digit, 0 otherwise
 *@c: character to be checked if it is lowercase or uppercase
 *
 * Return: 1 if c is a digit, 0 otherwise
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);

}
