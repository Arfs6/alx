#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - create a two dimensional array
 * @width: width or columns
 * @height: height or rows
 *
 * Return: pointer to array
 * 0/NULL if width or height <= 0 (two small)
 * 0/NULL if fails (in sufficient memory)
*/
int **alloc_grid(int width, int height)
{
	int **grid, i, j;

	if (width <= 0 || height <= 0)
		return (0);
	grid = (int **)malloc(sizeof(int *) * height);

	if (!grid)
		return (0);
	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(sizeof(int) * width);
		if (!grid[i])
		{
			i--;
			while (i >= 0)
			{
				free(grid[i]);
				i--;
			}
			free(grid);
			return (0);
		}
	}
	for (i = 0; i < height; ++i)
	{
		j = 0;
		for (j = 0; j < width; j++)
		{
			grid[i][j] = 0;
		}
	}

	return (grid);
}
