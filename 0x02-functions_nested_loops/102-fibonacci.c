#include <stdio.h>

/**
 * main - prints the first 50 Fibonacci numbers, starting with 1 and 2,
 * followed by a new line
 *
 * Return: 0 on success
 */
int main(void)
{
	int i;
	long int onebefore, twobefore, current;

	onebefore = 1;
	twobefore = 1;
	current = 2;
	printf("%lu", twobefore);
	printf(", %lu", current);
	for (i = 2; i < 50; i++)
	{
		twobefore = onebefore;
		onebefore = current;
		current = twobefore + onebefore;

		printf(", %ld", current);
	}
	printf("\n");
	return (0);
}
