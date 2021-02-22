#include <stdio.h>
#include "holberton.h"

/**
 * print_diagsums - prints the sum of the two diagonals of a square matrix 
 * @a: array to be used
 * @size: size of the matrix
 *
 * Return: void
 */
void print_chessboard(int *a, int size)
{
	int i = 0, sum_1 = 0, sum_2 = 0;

	for (; i < size; i++)
	{
		sum_1 += a[i][i];
		sum_2 += a[size - i - 1][i];
	}
	printf("%d, %d\n", sum_1, sum_2);
}
