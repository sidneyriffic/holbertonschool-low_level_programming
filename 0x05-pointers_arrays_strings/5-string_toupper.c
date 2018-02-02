/**
 * string_toupper - converts characters in a string to uppercase
 *
 * @a: string to convert
 *
 * Return: character array
 */
char *string_toupper(char *a)
{
	char *ptr = a;

	while (*ptr != '\0')
	{
		if (*ptr >= 'a' && *ptr <= 'z')
			*ptr -= 32;
		ptr++;
	}
	return (a);
}
