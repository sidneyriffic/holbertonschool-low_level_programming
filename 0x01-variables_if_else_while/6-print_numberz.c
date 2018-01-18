#include <stdio.h>

/**
 * main - a simple program that outputs 0-9
 *
 * Return: 0 on success
 */
int main(void)
{
	int i;

	for (i = 48; i < 58; i++)
		putchar(i);
	putchar('\n');
	return (0);
}
