#include "holberton.h"

/**
 * _strncpy - copys str from src to dest
 *
 * @dest: destination string
 * @src: source string
 * @n: number of characters to copy
 *
 * Return: pointer to dest string
 */
char *_strncpy(char *dest, char *src, int n)
{
	char *ptr = dest;

	while (n-- > 0)
	{
		*ptr++ = *src++;
		if (*src == '\0')
			break;
	}
	if (n > 0)
		while (n)
		{
			*ptr++ = 0;
			n--;
		}

	return (dest);
}
