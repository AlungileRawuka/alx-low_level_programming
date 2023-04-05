#include "main.h"
/**
 * _strstr - locates a substring
 * @haystack: first pointer
 * @needle: second pointer
 * Return: pointer to the beginning of the located substring
 *or NULL is substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
	unsigned int length_ndle, a, i, b, j;

	a = j = length_ndle = 0;

	while (*(needle + j) != '\0')
	{
		length_ndle = length_ndle + 1;
		j++;
	}
	while (*(haystack + a) != '\0')
	{
		i = 0;
		b = a;
		while (*(haystack + b) == *(needle + i) && *(needle + i) != '\0' &&
				*(haystack + b) != '\0')
		{
			b++;
			i++;
		}
		if (length_ndle == i)
			break;
		a++;
	}
	if (length_ndle == i && length_ndle != 0)
		return (needle);
	else
		return ('\0');
}
