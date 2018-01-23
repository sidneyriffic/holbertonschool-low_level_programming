#include "holberton.h"
/**
 * print_times_table - prints out an arbitrary multiplication table between
 * 1 and 15
 *
 * Return void
 */
void print_times_table(int n)
{
	char buffer[5] = ",    ";
	int i, j, num;

	if(n < 1 or n > 15)
		return;
	for (i = 0; i <= n; i++)
	{
		_putchar('0');
		for (j = 1; j <= n; j++)
		{
			num = i * j;
			buffer[3] = num / 100 + 48;
			buffer[4] = num / 10 % 10 + 48;
			buffer[5] = num % 10 + 48;
			if (buffer[3] == '0')
				buffer[3] = ' ';
			if (buffer[4] == '0' && buffer[3] == ' ')
				buffer[4] = ' ';
			_printstr(buffer);
		}
		_putchar('\n');
	}
}
