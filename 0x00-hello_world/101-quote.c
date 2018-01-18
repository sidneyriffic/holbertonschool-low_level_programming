#include <stdio.h>
#include <unistd.h>

/**
 * main - a simple program to write a line of text, this time without the
 * commands from previous examples
 *
 * Return: 1 when finished
 */
int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
