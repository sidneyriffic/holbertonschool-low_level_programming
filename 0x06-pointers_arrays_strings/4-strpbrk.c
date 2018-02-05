/**
 * _strpbrk - Returns pointer to first occurence of any of accept
 * in the string s
 *
 * @s: string to search
 * @accept: characters to look for
 *
 * Return: pointer to first occurrence of accept in s
 */
char *_strpbrk(char *s, char *accept)
{
	char *ptr = accept;

	while (*s != 0)
	{
		if (*s == *ptr && *ptr != 0)
			return (s);
		ptr++;
		if (*ptr == 0)
		{
			ptr = accept;
			s++;
		}
	}
	return (0);
}
