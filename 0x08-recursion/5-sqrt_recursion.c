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

	if (n == 1 || n == 0)
		return (n);
	return (_sqrt(temp, n));
}

/**
 * _sqrt - returns the square root of a number
 * @n: test number
 * @x: squared number
 *
 * Return: the square root of n
 */
int _sqrt(int n, int x)
{
	if (n * n == x)
		return (n);
	else if (n < 0)
		return (-1);
	return (_sqrt(n - 1, x));
}
