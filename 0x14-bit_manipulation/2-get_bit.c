#include "holberton.h"

/**
 * get_bit - gets the value of a bit at a given index
 * @n: the number
 * @index: index staring from 0 of the bit required
 *
 * Return: the converted value
 */
int get_bit(unsigned long int n, unsigned int index)
{
	return ((n >> index) & 1);
}
