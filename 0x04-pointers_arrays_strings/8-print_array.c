#include <stdio.h>

/**
 * print_array - prints an array of integers, comma separated
 *
 * @a: array of integers
 * @n: number of integers in array
 *
 * Return: void
 */
void print_array(int *a, int n)
{
	int i;

	if (n > 0)
		printf("%d", a[0]);
	for (i = 1; i < n; i++)
		printf(", %d", a[i]);
	printf("\n");
}
