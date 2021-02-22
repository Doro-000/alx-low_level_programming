#include "holberton.h"

/**
 * _memcpy - copies a memory area
 * @dest: memory area to be copied to
 * @src: memory area to be copied from
 * @n: number of bytes to be copied
 *
 * Return: pointer to the copied memory block
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i = 0;
	
	for (; i < n; i++)
	{
		src[i] = dest[i];
	}
	return (dest);
}