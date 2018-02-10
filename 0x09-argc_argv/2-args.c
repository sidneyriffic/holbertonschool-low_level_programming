#include <stdio.h>
/**
 * main - print number of arguments passed to program
 *
 * @argc: number of arguments to program
 * @argv: arguments to program
 *
 * Return: 0 if successful
 */
int main(int argc, char **argv)
{
	int n = -1;

	while (++n < argc)
		printf("%s\n", argv[n]);
	return (0);
}
