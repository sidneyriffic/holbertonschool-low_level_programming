#include "holberton.h"

/**
 * _printstr - prints a given string
 * @c: a null temrinated character array
 *
 * Return: 0 if successful
 */
int _printstr(char c[])
{
	int i = 0;

	while (c[i] != '\0')
		_putchar(c[i++]);

	return (0);
}

/**
 * jack_bauer - prints times from 00:00 to 24:00
 *
 * Return: 0 on completion
 */
void jack_bauer(void)
{
	char x[6] = "00:00\n";

	while (x[0] != '2' ||  x[1] != '4')
	{
		_printstr(x);
		x[4]++;
		if (x[4] == '9' + 1)
		{
			x[4] = '0';
			x[3]++;
		}
		if (x[3] == '6')
		{
			x[3] = '0';
			x[1]++;
		}
		if (x[1] == '9' + 1)
		{
			x[1] = '0';
			x[0]++;
		}
	}
}
