#include "holberton.h"

/**
 * print_alphabet_x10 - a simple program that outputs the alphabet 10 times
 * followed by a newline
 *
 * Return: 0 on success
 */
void print_alphabet_x10(void)
{
	int i;
	for(i = 0; i < 10; i++)
	{
		_printstr("abdefghijklmnopqrstuvwxyz");
	}
	_putchar('\n');
}
