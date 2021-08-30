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
	int *temp = array;

	if (array == NULL)
		return (-1);

	while (size > 1)
	{
		printf("Searching in array: ");
		for (i = 0; i < size; i++)
		{
			if (i != size - 1)
				printf("%d, ", temp[i]);
			else
				printf("%d\n", temp[i]);
		}

		if (size % 2 == 0)
			mid = (size / 2) - 1;
		else
			mid = size / 2;

		if (temp[mid] == value)
			return (&(temp[mid]) - array);
		else if (temp[mid] > value)
			size = mid;
		else
		{
			temp += mid + 1;
			size -= (mid + 1);
		}
	}
	printf("Searching in array: %d\n", temp[0]);
	if (temp[0] == value)
		return (&(temp[0]) - array);
	else
		return (-1);
}
