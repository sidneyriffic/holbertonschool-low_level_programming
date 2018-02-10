#include <stdio.h>
#include <stdlib.h>
/**
 * main - output minimum number of coins to make change
 *
 * @argc: number of arguments
 * @argv: strings of arguments
 *
 * Return: 1 if error, 0 if success
 */
int main(int argc, char **argv)
{
	int cents, coins = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);
	while (cents >= 25)
	{
		coins++;
		cents -= 25;
	}
	while (cents >= 10)
	{
		coins++;
		cents -= 10;
	}
	if (cents >= 5)
	{
		coins++;
		cents -= 5;
	}
	while (cents >= 2)
	{
		coins++;
		cents -= 2;
	}
	if (cents == 1)
		coins++;
	printf("%d\n", coins);
	return (0);
}
