#include <stdlib.h>

/**
 * argstostr - converts array of strings to one string with newline separators
 *
 * @ac: number of strings
 * @av: array of strings
 *
 * Return: char * to concatenated string
 */
char *argstostr(int ac, char **av)
{
	int size = 0, i;
	char *ptr, *ret, *retptr;

	if (ac == 0 || !av)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		ptr = av[i];
		while (*ptr++)
			size++;
	}

	ret = malloc(size + 1 + ac);
	if (!ret)
		return (NULL);

	retptr = ret;
	for (i = 0; i < ac; i++)
	{
		for (ptr = av[i]; *ptr; ptr++, retptr++)
		{
			*retptr = *ptr;
		}
		*retptr++ = '\n';
	}

	return (ret);
}
