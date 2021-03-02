<<<<<<< HEAD
#include "holberton.h"

/**
 * free_grid -  frees a 2d array
 * @height: height of the array
 *
 * Return: void
 */
void free_grid(int **grid, int height)
{
	int i = 0;

	for (; i < height; i++)
		free(grid[i]);
	free(grid);
}
=======
#include "holberton.h"

/**
 * free_grid -  frees a 2d array
 * @height: height of the array
 *
 * Return: void
 */
void free_grid(int **grid, int height)
{
	int i = 0;

	for (; i < height; i++)
		free(grid[i]);
	free(grid);
}
>>>>>>> 07f123762532524972224fb4e0ab650722eb0881
