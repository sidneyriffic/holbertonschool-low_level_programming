#include "holberton.h"

/**
 * _strncat - appends first n characters from src to dest
 *
 * @dest: destination array
 * @src: source array
 * @n: number of characters
 *
 * Return: dest string
 */
char *_strncat(char *dest, char *src, int n)
{
	char *ptr = dest;

	while (*ptr != 0)
		ptr++;
	while (n-- > 0)
		*ptr++ = *src++;
	*ptr = 0;

	return (dest);
}
