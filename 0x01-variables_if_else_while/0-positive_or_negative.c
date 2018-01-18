#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - print whether a random number is positive, negative or zero
 *
 * Return: 0 on success
 **/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%i is positive\n", n);
	if (n < 0)
		printf("%i is negative\n", n);
	if (n == 0)
		printf("0 is zero\n");
	return (0);
}
