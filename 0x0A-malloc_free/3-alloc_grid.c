#include <stdlib.h>
/**
 * alloc_grid - allocates a matrix of integers
 *
 * @width: width of grid
 * @height: height of grid
 *
 * Return: void
 */
int **alloc_grid(int width, int height)
{
	int **grid, *ptr;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = malloc(height * (int) sizeof(int *));
	if (!grid)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		ptr = malloc(width * (int) sizeof(int));
		if (!ptr)
			return (NULL);
		for (j = 0; j < width; j++)
			ptr[j] = 0;
		grid[i] = ptr;
	}

	return (grid);
}
