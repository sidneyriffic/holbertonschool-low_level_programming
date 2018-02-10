/**
 * check_sqrt - get if a number is sqrt of another
 *
 * @x: number to reach
 * @y: number to check
 *
 * Return: sqrt of x, -1 otherwise
 */
int check_sqrt(int x, int y)
{
	if (y * y > x)
		return (-1);
	if (y * y == x)
		return (y);
	return (check_sqrt(x, y + 1));
}

/**
 * _sqrt_recursion - gets natural square root of a number, if any
 *
 * @x: number to get square root of
 *
 * Return: natural square root of number, -1 otherwise
 */
int _sqrt_recursion(int x)
{
	if (x < 0)
		return (-1);
	return (check_sqrt(x, 0));
}
