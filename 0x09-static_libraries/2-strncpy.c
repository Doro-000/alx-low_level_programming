#include "holberton.h"

/**
 * _strncpy - copies src to dest
 * @dest: string to be copied to
 * @src: string to be copied
 * @n: bytes to be used
 *
 * Return: pointer to the copied string dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
