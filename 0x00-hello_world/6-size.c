#include <stdio.h>

/**
* main - print the string in the put function
*
* Description: using the main function
* this program prints "Programming is like building a multilingual puzzle
* Return: 0
*/
int main(void)
{
	char c;
	int i;
	long long_int;
	long long long_long_int;
	float f;

	printf("Size of a char: %ld byte(s)\n", sizeof(c));
	printf("Size of an int: %ld byte(s)\n", sizeof(i));
	printf("Size of a long int: %ld byte(s)\n", sizeof(long_int));
	printf("Size of a long long int: %ld byte(s)\n", sizeof(long_long_int));
	printf("Size of a float: %ld byte(s)\n", sizeof(f));
	return (0);
}
