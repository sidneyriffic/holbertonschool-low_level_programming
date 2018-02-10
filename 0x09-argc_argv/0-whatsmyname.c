#include <stdio.h>

/**
 * main - prints the name of the program
 *
 * @argc: number of arguments to program
 * @argv: arguments to program
 *
 * Return: 0 if successful
 */
int main(int argc, char **argv)
{
	printf("%s\n", argv[argc - argc]);
	return (0);
}
