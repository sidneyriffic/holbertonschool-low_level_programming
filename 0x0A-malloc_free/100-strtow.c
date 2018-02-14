#include <stdlib.h>

/**
 * strtow - converts a string into its separate words
 *
 * @str: string to convert into words
 *
 * Return: 2d array pointer
 */
char **strtow(char *str)
{
	char **ret, *ptr = str;
	int wc = 0, i = 0;

	if (str == 0 || *str == 0)
		return (0);
	while (*ptr)
	{
		if (!(*ptr == ' ') && (*(ptr + 1) == ' ' || *(ptr + 1) == 0))
			wc++;
		ptr++;
	}
	if (wc == 0)
		return (NULL);
	ret = malloc((wc + 1) * sizeof(char *));
	if (ret == 0)
		return (0);
	while (*str)
	{
		if (*str != ' ')
		{
			for (ptr = str, wc = 0; *ptr != ' ' && *ptr != 0;)
				wc++, ptr++;
			ret[i] = malloc(wc + 1);
			if (ret[i] == 0)
			{
				while (i >= 0)
					free(ret[--i]);
				free(ret);
				return (0);
			}
			ptr = ret[i++];
			while (*str != ' ' && *str != 0)
				*ptr++ = *str++;
			*ptr = 0;
		}
		else
			str++;
	}
	ret[i] = 0;
	return (ret);
}
