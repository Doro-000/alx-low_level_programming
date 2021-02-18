#include "holberton.h"

/**
 * reverse_array - reverses an array
 * @a: array to be reversed
 * @n: number of elements
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i = 0;

	n--;
	for (; i < n; i++)
	{
		swap_int(a + n, a + i);
		n--;
	}
}

/**
 * swap_int - swaps the values of two ints
 * @a: value to be swapped
 * @b: value to be swapped
 *
 * Return: void
 **/
void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
