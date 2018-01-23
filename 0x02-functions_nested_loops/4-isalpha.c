/**
 * isalpha - returns whether c is an alpha character
 *
 * @c: ascii value of a character we're determining if is alpha
 *
 * Return: 1 is c is a letter, 0 otherwise
 */
int isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' || c <= 'z'))
		return (1);
	return (0);
}
