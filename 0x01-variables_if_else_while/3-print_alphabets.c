#include <stdio.h>

/**
 * main - a simple program that outputs the lowercase alphabet then upper
 *
 * Return: 0 on success
 */
int main(void)
{
	char alpha = 'a';

	for (int i = 0; i < 26; i++, alpha++)
		putchar(alpha);
	alpha = 'A';
	for (int i = 0; i < 26; i++, alpha++)
		putchar(alpha);
	putchar('\n');
	return (0);
}
