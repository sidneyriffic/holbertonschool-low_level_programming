/**
 * print_sign - returns whether a number is positive, negative or zero
 *
 * @n: integer to return the sign of
 *
 * Return: 1 if positive, 0 if zero, -1 if negative
 */
int print_sign(int n)
{
	if (n > 0)
		return (1);
	if (n == 0)
		return (0);
	return (-1);
}
