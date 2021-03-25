#include "holberton.h"

/**
 * set_bit - sets a bit at a position to 1
 * @n: number to be used
 * @index: index to be set
 *
 * Return: 1 on success, -1 on fail
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (n == NULL || (((1 << index) > *n) && *n))
		return (-1);
	*n |= (1 << index);
	return (1);
}