/**
 * _pow_recursion - return number to a positive integer power
 *
 * @x: number
 * @y: power
 *
 * Return: -1 if y < 0, result of x^y otherwise
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
