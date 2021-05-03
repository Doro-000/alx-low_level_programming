#include "holberton.h"

/**
 * _strcpy - copies a string to another buffer
 * @dest: destination to be copied to
 * @src: source to be copied from
 *
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (*(src + i) != '\0')
	{
		*(dest + i) = *(src + i);
		i++;
	}
	*(dest + i) = '\0';
	return (dest);
}
