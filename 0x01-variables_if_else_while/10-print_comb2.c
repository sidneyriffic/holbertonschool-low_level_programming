#include <stdio.h>

/**
 * main - a simple program that outputs 00-99 separated by commas
 *
 * Return: 0 on success
 */
int main(void)
{
	for (int i = 48; i < 58; i++)
		for (int j = 48; j < 58; j++)
		{
			putchar(i);
			putchar(j);
			if (i != 57 || j != 57)
			{
				putchar(',');
				putchar(' ');
			}
		}
	putchar('\n');
	return (0);
}
