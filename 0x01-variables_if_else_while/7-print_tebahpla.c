#include <stdio.h>

/**
 * main - a simple program that outputs the lowercase alphabet in reverse
 *
 * Return: 0 on success
 */
int main(void)
{
	char alpha = 'z';

	for (int i = 0; i < 26; i++, alpha--)
		putchar(alpha);
	putchar('\n');
	return (0);
}
