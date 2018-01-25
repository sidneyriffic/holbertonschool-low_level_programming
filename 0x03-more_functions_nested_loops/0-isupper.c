#include "holberton.h"

/**
 * _isupper - return if c is uppercase
 *
 * @c: integer to examine
 *
 * Return: 1 if upper, 0 otherwise
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}
