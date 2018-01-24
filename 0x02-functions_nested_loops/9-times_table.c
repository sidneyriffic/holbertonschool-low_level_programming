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
 * times_table - prints out a multiplication table for between
 * 0 and 9
 *
 * Return void
 */
void times_table(void)
{
	char line[] = "0,  0,  0,  0,  0,  0,  0,  0,  0,  0\n";
	int i;

	while (line[3] == ' ')
	{
		_printstr(line);
		for (i = 0; i < 10; i++)
		{
			line[i * 4] = line[i * 4] + i;
			if (line[i * 4] > '9')
			{
				line[i * 4] -= 10;
				if (line[i * 4 - 1] == ' ')
					line[i * 4 - 1] = '1';
				else
					line[i * 4 - 1]++;
			}
		}
	}
}
