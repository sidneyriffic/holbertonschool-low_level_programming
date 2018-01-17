#include <stdio.h>

/**
 * main - a simple program to write a line of text, this time without puts
 * or printf
 *
 * Return: 1 when finished
 */
int main(void)
{
	char buffer[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	fwrite(buffer, sizeof(char), sizeof(buffer) / sizeof(char), stdout);
	return (1);
}
