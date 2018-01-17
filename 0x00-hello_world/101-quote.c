#include <stdio.h>

/**
 * main - a simple program to write a line of text, this time without puts
 * or printf
 *
 * Return: 1 when finished
 */
int main(void)
{
	char b[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	fwrite(b, sizeof(char), sizeof(b) / sizeof(char), stderr);
	return (1);
}
