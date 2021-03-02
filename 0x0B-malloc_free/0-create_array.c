#include "holberton.h"

/**
 * create_array - creates an array of chars, and initializes it
 * @size: size of the array
 * @c: char to initialize the array wtih
 *
 * Return: pointer to the address of the array
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	
	if (size == 0)
		return (NULL);
	array = malloc(sizeof(char) * size);
	if (array != NULL)
	{
		while (size--)
			array[size] = 'H';
	}
	else
		return (NULL);
	return (array);
}
