#include "main.h"
/**
 * _strcmp - compares two strings,pointed to by s1 and s2
 * returns a positive integer, if s1 is greater than s2
 * a negative integer if s1 < s2
 * and 0 if they are equal
 * @s1: first string
 * @s2: second string
 * Return: integer
 *
 */
int _strcmp(char *s1, char *s2)
{
	int num, i;

	i = num = 0;
	while (*(s1 + i) != '\0')
	{
		if (*(s1 + i) != *(s2 + i))
		{
			num = *(s1 + i) - *(s2 + i);
			break;
		}
		i++;
	}
	
	return (num);

}

