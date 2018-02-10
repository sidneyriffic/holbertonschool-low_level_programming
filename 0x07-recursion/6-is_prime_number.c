#include <stdio.h>
/**
 * prime_finder - finds out if a number is prime recursively
 *
 * @x: number to determine if prime
 * @y: number to check if divisor
 *
 * Return: 1 if prime, 0 otherwise
 */
int prime_finder(int x, int y)
{
	if (x == y)
		return (1);
	if (!(x % y))
		return (0);
	return (prime_finder(x, y + 1));
}
/**
 * is_prime_number - returns if a number is prime
 *
 * @n: number to determine primeness of
 *
 * Return: 1 if prime, 0 otherwise
 */
int is_prime_number(int n)
{
	if (n < 2)
		return (0);
	return (prime_finder(n, 2));
}
