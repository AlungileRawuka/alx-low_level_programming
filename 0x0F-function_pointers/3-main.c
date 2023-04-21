#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * main - takes arguments from the command line and performs
 * relevant operation
 * @argc: argument counter
 * @argv: argument vector
 * Return: 0
 *
 */
int main(int argc, char *argv[])
{
	int num1, num2;
	int (*func)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	if (argv[2][1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	func = get_op_func(argv[2]);

	if (func == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	printf("%d\n", func(num1, num2));
	return (0);

}



