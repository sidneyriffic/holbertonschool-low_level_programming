/**
 * set_bit - sets the value of a bit at index,
 * starting from least bit at 0
 *
 * @n: number to get bit from
 * @index: index of bit
 *
 * Return: value of bit, or -1 if error
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = *n | 1ul << index;
	return (1);
}
