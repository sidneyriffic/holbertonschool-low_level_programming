#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiply two numbers passed to program
 *
 * @argc: number of arguments to program
 * @argv: arguments to program
 *
 * Return: 0 if successful
 */
int main(int argc, char **argv)
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
