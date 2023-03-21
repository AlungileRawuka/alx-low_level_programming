#include "main.h"
/**
 * _isalpha - returns 1 if c is a  character is lowercase or uppercase
 *0 otherwise
 *@c: character to be checked
 *
 * Return: 1 if c is an alphabet, lowercase or uppercase, 0 otherwise
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		return (1);
	else
		return (0);

}
