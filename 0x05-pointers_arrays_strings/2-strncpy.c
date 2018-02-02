#include "holberton.h"
#include <stdio.h>

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

	if (*src != 0)
		while (n > 0)
		{
			printf("n %d",n);
			*ptr = *src;
			ptr++;
			src++;
			if (*src == '\0')
				break;
			n--;
		}
	n--;
	if (n > 0)
		while (n)
		{
			*ptr = 0;
			ptr++;
			n--;
		}

	return (dest);
}
