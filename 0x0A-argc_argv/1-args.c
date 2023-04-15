#include <stdio.h>
/**
 * main - prints the number of arguments passed into it
 * followed by new line
 * @argc: integer representing number of arguments
 * @argv: array of strings
 * Return: 0(Upon succesful execution)
 */
int main(int argc, char __attribute__ ((unused)) *argv[])
{
	printf("%d\n", (argc - 1));

	return (0);
}
