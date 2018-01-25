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
	long int evenfibsum;

	onebefore = 1;
	twobefore = 1;
	current = 2;
	evenfibsum = 2;

	for (i = 2; current < 4000000; i++)
	{
		twobefore = onebefore;
		onebefore = current;
		current = twobefore + onebefore;

		if (!(current % 2))
			evenfibsum += current;
	}
	printf("%ld\n", evenfibsum);
	return (0);
}
