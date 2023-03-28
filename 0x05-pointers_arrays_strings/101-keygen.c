#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - generates random valid passwords
 *
 * Return: 0(Always)
 */
int main(void)
{
	int rand_n, num;

	srand(time(NULL));
	num  = 2772;
	while (num > 122)
	{
		rand_n = rand() % 126;
		printf("%c", rand_n);
		num = num - rand_n;
	}
	printf("%c", num);

	return (0);
}
