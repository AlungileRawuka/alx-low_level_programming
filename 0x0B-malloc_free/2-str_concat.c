#include <stdlib.h>
/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: pointer to the concatenated string, NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	char *s3;
	int i, s1_len, s2_len;

	s1_len = s2_len = 0;
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (*(s1 + s1_len) != '\0')
		s1_len++;

	while (*(s2 + s2_len) != '\0')
		s2_len++;
	s3 = malloc(sizeof(char) * ((s1_len + s2_len) - 1));
	if (s3 == NULL)
		return (NULL);
	for (i = 0; i < s1_len; i++)
	{
		*(s3 + i) = *(s1 + i);
	}
	for (i = 0; i < s2_len; i++)
	{
		*(s3 + s1_len + i) = *(s2 + i);
	}
	return (s3);
}
