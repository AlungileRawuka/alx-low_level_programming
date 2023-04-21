#include <stdlib.h>
#include <stdio.h>
/**
 * main - prints its opcodes
 * @argc: argument counter
 * @argv: argument vector
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int bytes, a;
	char *opcodes = (char *) main;

	a = 0;
	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	bytes = atoi(argv[1]);

	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	while (a < bytes)
	{
		printf("%02x", opcodes[a] & 0xFF);
		if (a != bytes - 1)
			printf(" ");
		a++;
	}

	printf("\n");
	return (0);
}




