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
	int i = 0;

	while (n > 0)
	{
		dest[i] = src[i];
		i++;
		if (src[i] == '\0')
			break;
		n--;
	}
	n--;
	if (n > 0)
		while (n)
		{
			dest[i] = 0;
			i++;
			n--;
		}

	return (dest);
}
