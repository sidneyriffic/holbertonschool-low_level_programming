#include "holberton.h"

/**
 * _printstr - print a given string using _putchar
 * @x: a null terminated character array to be printed
 * Return: 0 on success
 */
int _printstr(char x[])
{
	int i = 0;

	while (x[i] != '\0')
		_putchar(x[i++]);
	return (0);
}

/**
 * main - a simple program that outputs "Holberton"
 * Return: 0 on success
 */
int main(void)
{
	_printstr("Holberton\n");
	return (0);
}
