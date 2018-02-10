#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
/**
 * main - add positive numbers
 *
 * @argc: number of arguments to program
 * @argv: arguments to program
 *
 * Return: 0 if successful, 1 if non-digit argument
 */
int main(int argc, char **argv)
{
	int i, j, sum = 0;

	for (i = 1; i < argc; i++)
		for (j = 0; argv[i][j] != 0; j++)
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}

	printf("loop 2\n");
	for (i = 1; i < argc; i++)
		sum += atoi(argv[i]);
	printf("%d\n", sum);

	return (0);
}
