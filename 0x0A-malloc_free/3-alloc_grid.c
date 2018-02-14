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
	int **grid;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = malloc(height * sizeof(int *));
	if (grid == NULL)
		return (NULL);
	grid[0] = malloc(height * width * sizeof(int));
	if (grid[0] == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		grid[i] = grid[0] + width * i;
		for (j = 0; j < width; j++)
			grid[i][j] = 0;
	}

	return (grid);
}
