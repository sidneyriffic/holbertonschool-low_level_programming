/**
 * _islower - determine case of an alpha character
 *
 * @c: - ascii integer value of the character
 *
 * Return: 1 if lowercase, 0 if uppercase
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}
