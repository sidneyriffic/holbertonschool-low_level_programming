#include <stdio.h>

#define MAXULI9 10000000000

/**
 * main - prints the first 100 Fibonacci numbers, starting with 1 and 2,
 * followed by a new line, without using long long, arrays or dynamic
 * allocation
 *
 * Return: 0 on success
 */
int main(void)
{
	int i;
	unsigned long int onebeforefirst = 0, onebeforesecond = 0;
	unsigned long int twobeforefirst = 0, twobeforesecond = 0;
	unsigned long int currentfirst = 0, currentsecond = 0;

	onebeforesecond = 1;
	twobeforesecond = 1;
	currentsecond = 2;

	printf("%lu", onebeforesecond);
	printf(", %lu", currentsecond);

	for (i = 2; i < 100; i++)
	{
		twobeforefirst = onebeforefirst;
		twobeforesecond = onebeforesecond;

		onebeforefirst = currentfirst;
		onebeforesecond = currentsecond;

		currentfirst = twobeforefirst + onebeforefirst;
		currentsecond = twobeforesecond + onebeforesecond;

		if (currentsecond >= MAXULI9)
		{
			currentfirst++;
			currentsecond -= MAXULI9;
		}

		if (currentfirst != 0)
			printf("%d, %lu%lu", i, currentfirst, currentsecond);
		else
			printf("%d, %lu", i, currentsecond);
	}
	printf("\n");
	return (0);
}
