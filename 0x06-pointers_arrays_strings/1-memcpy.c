/**
 * _memcpy - copies n bytes from source memory to destination
 *
 * @dest: destination to write to
 * @src: source to copy from
 * @n: number of bytes to write
 *
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, int n)
{
	char *ptr = dest;

	while (n--)
		*ptr++ = *src++;

	return (dest);
}
