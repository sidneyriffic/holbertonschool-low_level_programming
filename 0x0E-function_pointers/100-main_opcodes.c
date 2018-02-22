#include <stdio.h>
#include <stdlib.h>

/**
 * main - print hex opcodes of main up to n bytes passed in as an argument
 *
 * @ac: number of arguments
 * @av: array of argument strings
 *
 * Return: 0 on success
 */
int main(int ac, char *av[])
{
	unsigned char *f = (unsigned char *) (long int) main;
	int n, i;

	if (ac != 2)
	{
		printf("Error\n");
		return (1);
	}
	n = atoi(av[1]);
	if (n < 0)
	{
		printf("Error\n");
		return (2);
	}
	if (n > 0)
		printf("%x", *f++);
	for (i = 1; i < n; i++)
		printf(" %x", *f++);
	printf("\n");
	return (0);
}
