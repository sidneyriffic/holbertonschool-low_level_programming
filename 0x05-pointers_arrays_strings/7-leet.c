/**
 * leet - convert characters into 1337
 *
 * @a: string to convert
 *
 * Return: string
 */
char *leet(char *a)
{
	char *sptr = a;
	int index = 0;
	char translation[][10] = { { 'a', 'A', 't', 'T', 'o', 'O', 'e', 'E', 'l', 'L'}
				  , { '4', '4', '7', '7', '0', '0', '3', '3', '1', '1'} };

	while (*sptr != 0)
	{
		if (*sptr == 'a' || *sptr == 'A' || *sptr == 'e' || *sptr == 'E'
		    || *sptr == 'o' || *sptr == 'O' || *sptr == 't' || *sptr == 'T'
		    || *sptr == 'l' || *sptr == 'L')
		{
			index = 0;
			while (translation[0][index] != *sptr)
				index++;
			*sptr = translation[1][index];
		}
		sptr++;
	}
	return (a);
}
