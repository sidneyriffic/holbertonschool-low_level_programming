int wildmode(char *s1, char *s2);

/**
 * getsubstroff - Get offset to skip a substring, if it exists. Substring to
 * look for is in s2 and ends at null or a wildcard.
 *
 * @s1: string without wildcards we're searching for a substring
 * @s2: wildcarded string that contains the substring we're looking for
 * @n: counter for offset
 *
 * Return: offset n for skipping the substring in s1,
 * or -1 if substring not found
 */
int getsubstroff(char *s1, char *s2, int n)
{
	if (*s2 == '*')
		return (n);
	if (*s1 != *s2)
		return (-1);
	if (*s2 == 0)
		return (n);
	return (getsubstroff(s1 + 1, s2 + 1, n + 1));
}

/**
 * exactmode - Searches s1 with a substring from s2. Passes to
 * getsubstroffset to do comparison.
 *
 * @s1: non-wildcarded string we're checking for matches
 * @s2: wildcarded string we're checking the substring from
 *
 * Return: 1 if substring found, 0 otherwise
 */
int exactmode(char *s1, char *s2)
{
	int substroff;

	if (*s1 == 0 && *s2 == 0)
		return (1);
	if (*s1 == *s2)
	{
		substroff = getsubstroff(s1, s2, 0);
		if (substroff > -1)
			return (wildmode(s1 + substroff, s2 + substroff));
	}
	return (0);
}

/**
 * wildmode - Processes wildcards from s2 and handles backtracking
 * to match multiple instances of wildcarded substrings
 *
 * @s1: string we're trying to match
 * @s2: wildcarded string containing search pattern
 *
 * Return: 1 if valid match, 0 if not
 */
int wildmode(char *s1, char *s2)
{
	if (*(s2) == '*')
		return (wildmode(s1, s2 + 1));
	if (*s2 == 0)
		return (1);
	if (*s1 == 0)
		return (0);
	if (!exactmode(s1, s2))
		return (wildmode(s1 + 1, s2));
	return (1);
}

/**
 * wildcmp - Compares two strings with * wildcards. Sets initial search mode.
 *
 * @s1: first string, does not have *
 * @s2: second string, has *
 *
 * Return: 1 if identical, otherwise 0
 */
int wildcmp(char *s1, char *s2)
{
	if (*s2 == '*')
		return (wildmode(s1, s2));
	return (exactmode(s1, s2));
}
