#include "holberton.h"

/**
 * print_line - prints a line of underscores of a given length
 *
 * @n: length of line to print
 *
 * Return: void
 */
void print_line(int n)
{
	while (n > 0)
	{
		_putchar('_');
		n--;
	}
	_putchar('\n');
}
