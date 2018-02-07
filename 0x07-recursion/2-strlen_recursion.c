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
