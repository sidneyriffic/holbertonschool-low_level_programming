#include <stdio.h>
/**
 * print_diagsums - prints both sums of diagonal numbers in a 2d array
 *
 * @a: integer matrix
 * @size: square size of matrix
 *
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int n = 0, sum = 0;
	int *ptr = a;

	for (n = size; n > 0; n--)
	{
		sum += *ptr;
		ptr += size + 1;
	}
	printf("%d, ", sum);

	sum = 0;
	ptr = a + size - 1;
	for (n = size; n > 0; n--)
	{
		sum += *ptr;
		ptr += size - 1;
	}
	printf("%d\n", sum);
}
