#include <stdio.h>
/**
 * main - prints all the arguments it receives
 * followed by new line
 * @argc: integer representing number of arguments
 * @argv: array of strings
 * Return: 0(Upon succesful execution)
 */
int main(int argc, char *argv[])
{

	int a;

	a = 0;
	while (a < argc)
	{
		printf("%s\n", argv[a]);
		a++;
	}

	return (0);
}
