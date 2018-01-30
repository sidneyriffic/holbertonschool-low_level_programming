#include "holberton.h"

/**
 * _isdigit - determines if input is a digit
 *
 * @c: int to examine
 *
 * Return: 1 if digit, 0 otherwise
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
