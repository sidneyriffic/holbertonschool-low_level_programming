/**
 * swap_int - swaps two integer's values
 *
 * @a: an integer to swap with b
 * @b: integer to swap with a
 *
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int n;

	n = *a;
	*a = *b;
	*b = n;
}
