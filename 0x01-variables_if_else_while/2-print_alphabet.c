#include <stdio.h>

/**
 * main - a simple program that prints out the lowercase alphabet
 *
 * Return: 0 on completion
 */
int main(void)
{
	char a;

	for (a = 'a'; a <= 'z'; a++)
		putchar(a);
	putchar('\n');
	return (0);
}
