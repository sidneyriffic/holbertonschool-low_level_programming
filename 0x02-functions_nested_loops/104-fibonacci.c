#include <stdio.h>

/**
 * main - prints the first 100 Fibonacci numbers, starting with 1 and 2,
 * followed by a new line, without using long long, arrays or dynamic allocation
 *
 * Return: 0 on success
 */
int main(void)
{
	int i;
	double onebefore, twobefore, current;

	onebefore = 1;
	twobefore = 1;
	current = 2;
	printf("1, 2");
	for (i = 2; i < 97; i++)
	{
		twobefore = onebefore;
		onebefore = current;
		current = twobefore + onebefore;

		printf(", %f\n", current);
	}
	printf("\n");
	return (0);
}
