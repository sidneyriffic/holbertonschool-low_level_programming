#include "holberton.h"

/**
 * _strlen - get length of a string
 *
 * @s: string to get length of
 *
 * Return: length of string
 */
int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
	}

	return (i);
}

/**
 * puts_half - prints out the second half of the string
 * if odd len, start at (len - 1) / 2
 *
 * @str: string to print half of
 *
 * Return: void
 */
void puts_half(char *str)
{
	int i;

	for (i = (_strlen(str) + 1) / 2; str[i] != '\0'; i++)
		_putchar(str[i]);
	_putchar('\n');
}
