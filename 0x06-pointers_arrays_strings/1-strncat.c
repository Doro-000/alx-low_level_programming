#include "holberton.h"

/**
 * _strncat - concatenates 2 strings, using at most n bytes from src
 * @dest: string to be attached to
 * @src: string to be attached
 * @n: bytes to be used
 *
 * Return: pointer to the concatenated string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int length_dest = _strlen(dest), length_src = _strlen(src), i = 0;

	if (length_src > n)
	{
		while (i < n)
		{
			dest[length_dest + i] = src[i];
			i++;
		}
		dest[length_dest + i] = '\0';
	}
	else
	{
		while (src[i] != '\0')
		{
			dest[length_dest + i] = src[i];
			i++;
		}
		dest[length_dest + i] = '\0';
	}
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
