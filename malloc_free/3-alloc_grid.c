#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - allocate a 2D array of integers
 * @width: width of the grid
 * @height: height of the grid
 *
 * Allocate memory for a 2D grid of integers and initialize elements to 0
 *
 * Return: pointer to the grid or NULL if allocation fails
 */
int **alloc_grid(int width, int height)
{
	int row, col;
	int **grid;

	/*check if width or height is non-positive and return NULL in such cases*/
	if (width <= 0 || height <= 0)
		return (NULL);

	/*allocate memory for rows*/
	grid = malloc(sizeof(int *) * height);

	if (grid == NULL)
		return (NULL); /*return NULL if memory allocation fails*/

	/*allocate memory for each row and initialize elements to 0*/
	for (row = 0; row < height; row++)
	{
		grid[row] = malloc(sizeof(int) * width);

	if (grid[row] == NULL)
	{
		/*if row memory allocation fails, free previous allocations*/
		for (row = 0; row < height; row++)
		free(grid[row]);
		free(grid);
		return (NULL); /*return NULL if allocation fails*/
	}

	for (col = 0; col < width; col++)
		grid[row][col] = 0; /*initialize elements to 0*/
	}
	return (grid); /*return a pointer to the allocated 2D grid*/
}

