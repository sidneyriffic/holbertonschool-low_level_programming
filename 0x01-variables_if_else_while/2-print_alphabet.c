#include <stdio.h>

/**
 * main - a simple program that outputs the lowercase alphabet
 *
 * Return: 0 on success
 */
int main(void)
{
	for (char a = 'a'; a < 123; a++)
		putchar(a);
	putchar('\n');
	return (0);
}
