#include <stdlib.h>

/**
 * array_range - create a range of integers, inclusive
 *
 * @min: number to start at
 * @max: number to end at
 *
 * Return: pointer to array on success, 0 on fail or min > max
 */
int *array_range(int min, int max)
{
	int *ret, *ptr;
	int size = max - min + 1;

	if (min > max)
		return (0);
	ret = malloc(size * sizeof(int));
	if (ret == 0)
		return (0);

	ptr = ret;
	while (size--)
		*ptr++ = max - size;

	return (ret);
}
