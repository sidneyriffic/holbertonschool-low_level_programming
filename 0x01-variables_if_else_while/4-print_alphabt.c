#include <stdio.h>

/**
 * main - a simple program that outputs the lowercase alphabet
 *
 * Return: 0 on success
 */
int main(void)
{
	char alpha = 'a';
	int i;

	for (i = 0; i < 26; i++, alpha++)
		if (alpha != 'q' && alpha != 'e')
			putchar(alpha);
	putchar('\n');
	return (0);
}
