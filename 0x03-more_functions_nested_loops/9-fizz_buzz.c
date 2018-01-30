#include <stdio.h>

/**
 * main - The fizzbuzz, replace 3 with fizz, 5 with buzz
 *
 * Return: 0 on success
 */
int main(void)
{
	int i;

	putchar('1');
	for (i = 2; i <= 100; i++)
		if (i % 15 == 0)
			printf(" FizzBuzz");
		else if (i % 5 == 0)
			printf(" Buzz");
		else if (i % 3 == 0)
			printf(" Fizz");
		else
			printf(" %d", i);
	putchar('\n');

	return (0);
}
