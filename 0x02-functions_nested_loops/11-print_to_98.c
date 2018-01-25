#include "holberton.h"
#include <stdio.h>

/**
 * _printstr - prints a given string
 * @c: a null temrinated character array
 *
 * Return: 0 if successful
 */
int _printstr(char c[])
{
	int i = 0;

	while (c[i] != '\0')
		_putchar(c[i++]);

	return (0);
}

/**
 * print_to_98 - print all natural numbers between the argument and 98,
 * inclusive
 *
 * @n: integer to start printing from
 *
 * Return: void
 */
void print_to_98(int n)
{
	while (n != 98)
	{
		printf("%d, ", n);
		if (n > 98)
			n--;
		else
			n++;
	}
	printf("%d\n", n);
}
