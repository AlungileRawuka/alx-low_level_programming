#include <stdio.h>

/**
* main - prints out the size of various data types in bytes
*
*
* Return: 0(after succesful execution)
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
