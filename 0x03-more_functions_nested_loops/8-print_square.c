#include "holberton.h"

/**
 * print_square - prints a square of # of a given size
 *
 * @size: size of square to print
 *
 * Return: 0
 */
void print_square(int size)
{
	int i, j;

	if (size <= 0)
		_putchar('\n');

	for (j = size; j > 0; j--)
	{
		for (i = size; i > 0; i--)
			_putchar('#');
		_putchar('\n');
	}
}
