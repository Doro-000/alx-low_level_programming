#include "holberton.h"

/**
 * _strdup - allocates space in memory, which contains a copy of the str
 * @str: pointer to the string to be copied to the allocated memory
 *
 * Return: pointer to the memory block
 */
char *_strdup(char *str)
{
	char *block;
	int size = 1;

	if (str == NULL)
		return (NULL);
	while (*str++)
		size++;
	block = malloc(size);
	if (block != NULL)
	{
		while (*str)
			*block++ = *str++;
	}
	else
		return (NULL);
	return (block);
}
