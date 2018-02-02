/**
 * rot13 - encodes a string in rot13
 *
 * @a: string to encode
 *
 * Return: encoded string
 */
char *rot13(char *a)
{
	char *sptr = a;
	int index;
	char trans[2][54] = {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ",
				   "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM"};

	while (*sptr != 0)
	{
		if ((*sptr >= 'a' && *sptr <= 'z') || (*sptr >= 'A' && *sptr <= 'Z'))
		{
			index = 0;
			while (*sptr != trans[0][index])
				index++;
			*sptr = trans[1][index];
		}
		sptr++;
	}
	return (a);
}
