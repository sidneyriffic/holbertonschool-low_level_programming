#include "holberton.h"

/**
 * print_alphabet - prints the alphabet
 * Return: void
 */
void print_alphabet(void)
{
	char str[] = "abcdefghijklmnopqrstuvwxyz\n";
	int i = 0;

	while (str[i] != '\0')
		_putchar(str[i++]);
	_putchar('\n');
}
