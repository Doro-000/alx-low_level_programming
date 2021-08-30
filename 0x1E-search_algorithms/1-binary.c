#include "search_algos.h"

/**
 * binary_search - binary search algo
 * @array: array to be searched
 * @size: size of the array
 * @value: value to search for
 *
 * Return: index where value is located, or -1 on failure
 */
int binary_search(int *array, size_t size, int value)
{
	size_t i, mid;

	if (array == NULL)
		return (-1);

	printf("Searching in array: ");
	for (i = 0; i < size; i++)
	{
		if (i != size - 1)
			printf("%d, ", array[i]);
		else
			printf("%d\n", array[i]);
	}

	if (size == 1)
	{
		if (array[0] == value)
			return (0);
		else
			return (-1);
	}

	if (size % 2 == 0)
		mid = (size / 2) - 1;
	else
		mid = size / 2;

	if (value > array[mid])
		return (binary_search(array + mid + 1, size / 2, value));
	else if (value < array[mid])
		return (binary_search(array, mid, value));
	else
		return (array[mid]);
}
