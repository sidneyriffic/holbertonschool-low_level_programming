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
	int nlast;
	int nlastabs;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	nlast = n % 10;
	nlastabs = n % 10;
	printf("Last digit of ");
	if (nlastabs < 0)
		nlastabs = -nlastabs;
	if (nlastabs > 6)
		printf("%d is %d and is greater than 5\n", n, nlast);
	else if (nlastabs > 0)
		printf("%d is %d and is less than 6 and greater than 0\n", n, nlast);
	else
		printf("%d is %d and is 0\n", n, nlast);
	return (0);
}
