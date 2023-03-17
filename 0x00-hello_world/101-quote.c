#include <stdio.h>
#include <string.h>
#include <unistd.h>
/**
 * main - prints a string in the standard error
 * Return: 1
 */
int main(void)
{
	char str[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	int len = strlen(str);
        
	write(2,str,len);
	return (1);
}
