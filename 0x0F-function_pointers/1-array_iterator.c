#include "holberton.h"

/**
 * array_iterator -  executes a function given, on each element of an array
 * @array: address of the array to be used
 * @size: size of the array
 *
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	while (size-- >= 0)
		action(array[size]);
}
