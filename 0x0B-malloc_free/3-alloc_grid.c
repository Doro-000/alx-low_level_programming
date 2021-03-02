#include "holberton.h"

/**
 * alloc_grid -  returns a pointer to a 2 dimensional array of integers
 * @width: width of the array
 * @height: height of the array
 *
 * Return: pointer to the array
 */
int **alloc_grid(int width, int height)
{
	int **array;
	int i = 0, j = 0;

	if (width == 0 || height == 0)
		return (NULL);
	array = malloc(sizeof(int *) * height);
	if (array != NULL)
	{
		for (; i < width; i++)
			array[i] = (int *) malloc(sizeof(int) * width);
		for (i = 0; i < height; i++)
		{
			for (; j <= width; j++)
				array[i][j] = 0;
		}
		return (array);
	}
	else
		return (NULL);
}
