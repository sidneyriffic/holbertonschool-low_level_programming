#include "holberton.h"

/**
 * _strcat - concatenates 2 strings
 *
 * @dest: destination array
 * @src: source array
 *
 * Return: destination array
 */
char *_strcat(char *dest, char *src)
{
	char *ptr = dest;

	while (*ptr != 0)
		ptr++;
	while (*src != 0)
		*ptr++ = *src++;
	*ptr = 0;

	return (dest);
}
