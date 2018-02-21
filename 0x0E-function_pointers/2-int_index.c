#include <stdio.h>

/**
 * int_index - checks an array for an integer that matches
 * the function defined by cmp
 *
 * @array: array to search
 * @size: size of array
 * @cmp: comparison function to check with
 *
 * Return: index of match, -1 otherwise;
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (cmp != NULL && array != NULL)
		for (i = 0; i < size; i++)
			if (cmp(array[i]))
				return (i);
	return (-1);
}
