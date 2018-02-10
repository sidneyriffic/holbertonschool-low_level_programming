/**
 * _strlen_recursion - return length of string
 *
 * @s: string to get length of
 *
 * Return: length of string
 */
int _strlen_recursion(char *s)
{
	if (*s == 0)
		return (0);
	return (1 + _strlen_recursion(s + 1));
}

/**
 * palindrome_finder - finds palindromes
 *
 * @s: string to find palindrome of
 * @l: last offset of string
 *
 * Return: 1 if palindrome, 0 otherwise
 */
int palindrome_finder(char *s, int l)
{
	if (l < 1)
		return (1);
	if (*s == *(s + l))
		return (palindrome_finder(s + 1, l - 2));
	return (0);
}

/**
 * is_palindrome - returns if string is palindrome or not
 *
 * @s: string to test
 *
 * Return: 1 if palindrome, 0 otherwise
 */
int is_palindrome(char *s)
{
	int len = _strlen_recursion(s);

	return (palindrome_finder(s, len - 1));
}
