#include "holberton.h"
#include <stdlib.h>

/**
 * alloc_grid - create a 2d integer grid using malloc.
 * Description: Each element of the grid should be initialized to 0.
 * @width: int size width
 * @height: int size height
 * Return: Pointer to new grid
 */

int **alloc_grid(int width, int height)
{
	int x, y;
	int **matrix;

	if (width <= 0 || height <= 0)
	{
		return (0);
	}
	matrix = malloc(height * sizeof(int *));

	if (matrix == NULL)
	{
		return (0);
	}
	for (x = 0; x < height; x++)
	{
		matrix[x] = malloc(width * sizeof(int));

		if (matrix[x] == NULL)
		{
			for (; x >= 0; x--)
			{
				free(matrix[x]);
			}
			free(matrix);
				return (0);
		}
	}

	for (x = 0; x < height; x++)
	{
		for (y = 0; y < width; y++)
		{
			matrix[x][y] = 0;
		}
	}
	return (matrix);
}
