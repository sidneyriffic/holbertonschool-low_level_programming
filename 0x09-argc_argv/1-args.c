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
	printf("%d\n", argc - 1);
	argv[0] = "";
	return (0);
}
