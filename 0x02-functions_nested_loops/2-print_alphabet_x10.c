#include "holberton.h"

/**
 * print_alphabet_x10 - a simple program that outputs the alphabet 10 times
 * followed by a newline
 *
 * Return: 0 on success
 */
void print_alphabet_x10(void)
{
	int i, j;
	char str[] = "abcdefghijklmnopqrstuvwxyz\n";

	for (i = 0; i < 10; i++)
		for (j = 0; str[j] != '\0'; j++)
			_putchar(str[j]);
}

