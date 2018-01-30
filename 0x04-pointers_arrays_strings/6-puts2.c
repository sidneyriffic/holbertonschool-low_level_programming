#include "holberton.h"

/**
 * puts2 - outputs every other character in a string
 *
 * @str: string to print
 *
 * Return: void
 */
void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		if ((i + 1) % 2)
			_putchar(str[i]);
	_putchar('\n');
}
