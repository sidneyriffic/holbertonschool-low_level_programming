#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - a simple program to print the last digit of a number,
 * and whether it is greater than 6, between 6 and 0, or less than zero
 *
 * Return: 0 on success
 **/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("Last digit of ");
	if (n % 10 > 5)
		printf("%d is %d and is greater than 5\n", n, n % 10);
	else if (n % 10 != 0)
		printf("%d is %d and is less than 6 and not 0\n", n, n % 10);
	else
		printf("%d is %d and is 0\n", n, n % 10);
	return (0);
}
