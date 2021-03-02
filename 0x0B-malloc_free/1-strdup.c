#include "holberton.h"

/**
 * _strdup - allocates space in memory, which contains a copy of the string given
 * @str: pointer to the string to be copied to the allocated memory
 *
 * Return: pointer to the memory block
 */
char *_strdup(char *str)
{
	char *block;
	int i = 0;

	if (str != NULL)
		return (NULL);
	block = malloc(sizeof(char) * sizeof(str));
	if (block != NULL)
	{
		for (; str[i] != '\0'; i++)
			block[i] = str[i];
		block[i] = '\0';
	}
	else
		return (NULL)
	return (block);
}
