#include "holberton.h"

/**
 * binary_to_uint - converts a binary to an unsigned int
 * @b: the binary number as a string
 *
 * Return: the converted value
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (n == NULL || (((1 << index) > *n) && *n))
		return (-1);
	*n &= ~(1 << index);
	return (1);
}
