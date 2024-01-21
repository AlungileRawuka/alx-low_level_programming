#include <stdio.h>
/**
 * main - prints the name of the program that executes it, followed by a new
 * line
 * @argc: integer, argument counter
 * @argv:  array of strings
 * Return: 0 when executed succesfully, 1 on error
 */

int main(int argc, char *argv[])
{
	printf("%s\n", argv[argc - 1]);

	return (0);
}
