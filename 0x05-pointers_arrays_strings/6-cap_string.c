/**
 * cap_string - capitalize all words in a string.
 * separators: space tab newline ,;.!?"(){}
 *
 * @a: character string to capitalize
 *
 * Return: string
 */
char *cap_string(char *a)
{
	int newword = 1;
	char *ptr = a;

	while (*ptr != 0)
	{
		if (newword == 1)
		{
			newword = 0;
			if (*ptr < 'z' && *ptr > 'a')
				*ptr -= 32;
		}
		if (*ptr == ' ' || *ptr == '\t' || *ptr == '\n' || *ptr == ','
		    || *ptr == ';' || *ptr == '.' || *ptr == '!' || *ptr == '"'
		    || *ptr == '(' || *ptr == ')' || *ptr == '{' || *ptr == '}')
			newword = 1;
		ptr++;
	}
	return (a);
}
