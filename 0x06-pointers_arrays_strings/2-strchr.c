/**
 * _strchr - locates a character in a string
 *
 * @s: string to search
 * @c: character to search for
 *
 * Return: pointer to first occurence of c in s
 */
char *_strchr(char *s, char c)
{
	while (*s != 0)
	{
		if (*s == c)
			return (s);
		s++;
	}
	if (*s == c)
		return (s);
	return (0);
}
