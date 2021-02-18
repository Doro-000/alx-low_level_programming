#include "holberton.h"

/**
 * _strcat - concatenates 2 strings
 * @dest: string to be attached to
 * @src: string to be attached
 *
 * Return: pointer to the concatenated string dest
 */
char *_strcat(char *dest, char *src)
{
	int length_dest = _strlen, i = 0;

	while (src[i] != '\0')
	{
		dest[length_dest + i] = src[i];
		i++;
	}
	dest[length_dest + i] = '\0';
	return (dest);
}


/**
 * _strlen - counts the length of a string
 * @s: string to  be counted
 *
 * Return: the length of the string
 */
int _strlen(char *s)
{
	int length = 0, i = 0;

	while (s[i] != '\0')
	{
		length++;
		i++;
	}
	return (length);
}
