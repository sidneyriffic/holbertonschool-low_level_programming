#include "holberton.h"

/**
 * print_alphabet - prints the alphabet
 * Return: void
 */
void print_alphabet(void)
{
	char i = 'a';

	while (i <= 'z')
		_putchar(i++);
	_putchar('\n');
}
