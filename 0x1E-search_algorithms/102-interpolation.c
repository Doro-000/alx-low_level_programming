#include "search_algos.h"

/**
 * interpolation_search - interpolation search algo
 * @array: array to be searched
 * @size: size of the array
 * @value: value to be searched
 *
 * Return: index where value is located, or -1 on failure
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t pos;

	if (array == NULL)
		return (-1);

	pos = get_pos(array, 0, (int) size - 1, value);
	while (pos < size)
	{
		printf("Value checked array[%lu] = [%d]\n", pos, array[pos]);
		if (array[pos] == value)
			return ((int) pos);
		else if (array[pos] > value)
			pos = get_pos(array, 0, pos - 1, value);
		else
			pos = get_pos(array, pos + 1, (int) size - 1, value);
	}
	printf("Value checked array[%lu] is out of range\n", pos);
	return (-1);
}


size_t get_pos(int *array, int low, int high, int value)
{
	return (low + (((double)(high - low) / (array[high] - array[low])) * (value - array[low])));
}