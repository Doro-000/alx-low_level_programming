#include "holberton.h"

/**
 * malloc_checked - allocates memory using malloc, exits with status 98 if it fails
 * @b: size of the memory block to be allocated
 *
 * Return: pointer to the address of the memory block
 */
void *malloc_checked(unsigned int b)
{
	void *block;

	block = malloc(b);
	if (block != NULL)
		return (block);
	else
		exit(98);
}
