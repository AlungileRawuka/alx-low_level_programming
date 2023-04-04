#include "main.h"
/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: first pointer
 * @accept: second pointer
 * Return: a pointer to the byte in s that matches one of the bytes in accept
 * or NULL if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int smallest_indx, indx, a, i, is_found;

	a = i = is_found = 0;
	while (*(accept + a) != '\0')
	{
		i = 0;
		while (*(s + i) != '\0')
		{
			if (*(accept + a) == *(s + i))
			{
				if (!is_found)
					indx = smallest_indx = i;
				is_found = 1;
				indx = i;
				if (smallest_indx > indx)
					smallest_indx  = indx;
				break;
			}
			i++;
		}
		a++;
	}
	if (!is_found)
		return ('\0');
	else
		return (s + smallest_indx);
}
