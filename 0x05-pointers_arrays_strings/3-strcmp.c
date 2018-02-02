#include "holberton.h"

/**
 * _strcmp - compares two strings to see which is greater alphabetically
 *
 * @s1: string to compare
 * @s2: second string to compare
 *
 * Return: 1 if s1 greater, 0 if same, -1 if  different
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 != 0)
	{
		if (*s1 > *s2)
			return (1);
		if (*s1 < *s2)
			return (-1);
		s1++;
		s2++;
	}
	return (0);
}
