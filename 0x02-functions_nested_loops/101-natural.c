#include <stdio.h>

/**
 * main - prints the sum of all natural numbers below 1024 that are
 * divisible by 3 and 5
 *
 * Return: 0 on success
 */
int main(void)
{
	int i;
	int sum = 0;

	for (i = 0; i < 1024; i += 3)
		sum += i;
	for (i = 0; i < 1024; i += 5)
		if (i % 3)
			sum += i;
	printf("%d\n", sum);
	return (0);
}
