/**
 * get_bit - gets the value of a bit at index,
 * starting from least bit at 0
 *
 * @n: number to get bit from
 * @index: index of bit
 *
 * Return: value of bit, or -1 if error
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int m;

	if (index > 63)
		return (-1);

	m = 1 << index;
	return ((n & m) > 0);
}
