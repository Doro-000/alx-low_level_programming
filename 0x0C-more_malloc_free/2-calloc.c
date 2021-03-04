#include "holberton.h"

/**
 * _calloc - allocates memory using malloc, and initializes it to zero
 * @size: size of the memory block to be allocated
 * @nmemb: number of elements
 *
 * Return: pointer to the address of the memory block
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *block;
	int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	block = malloc(nmemb * size);
	if (block != NULL)
	{
		for (i = 0; i < nmemb; i++)
			*(int *)(block + i) = 0;
		return (block);
	}
	else
		return (NULL);
}
