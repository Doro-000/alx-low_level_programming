#include "function_pointers.h"

/**
 * int_index - searches for an int
 * @array: array to be used
 * @size: size of the array
 * @cmp: function used to compare values
 *
 * Return: returns the index of the first element for which cmp is not 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int match = -1, i = 0;

	if (size <= 0)
		return (-1);
	if (array != NULL && cmp != NULL)
	{
		while (i < size)
		{
			if (cmp(array[i]) != 0)
			{
				match = i;
				return (match);
			}
			i++;
		}
	}
	return (match);
}
