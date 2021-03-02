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
	int i = 0, size = 1;

	if (str == NULL)
		return (NULL);
	while (*str++)
		size++;
	block = malloc(sizeof(char) * size);
	if (block != NULL)
	{
		for (; i < size; i++)
			block[i] = str[i];
		block[i] = '\0';
	}
	else
		return (NULL);
	return (block);
}
