#include "holberton.h"

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number to be used
 *
 * Return: the square root of n
 */
int _sqrt_recursion(int n)
{
	int temp = n / 2;

	if (n < 0)
		return (-1);
	else if (n == 1 || n == 0)
		return (n);
}
