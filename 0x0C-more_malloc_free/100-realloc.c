#include "holberton.h"

/**
 * _realloc - reallocates a memory block
 * @ptr: pointer to the memory previously allocated with a call to malloc
 * @old_size: size of ptr
 * @new_size: size of the new memory to be allocated
 *
 * Return: pointer to the address of the new memory block
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *temp_block;
	unsigned int i;

	if (ptr == NULL)
	{
		ptr = malloc(new_size);
		return (ptr);
	}
	else if (new_size == old_size)
		return (ptr);
	else if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	else
	{
		temp_block = malloc(old_size);
		if (temp_block != NULL)
		{
			for (i = 0; i < old_size; i++)
				*((char *) temp_block + i) = *((char *) ptr + i);
			free(ptr);
			ptr = malloc(sizeof *ptr * new_size);
			if (ptr != NULL)
			{
				for (i = 0; i < min(old_size, new_size); i++)
					*((char *) ptr + i) = *((char *) temp_block + i);
				free(temp_block);
				return (ptr);
			}
			else
			{
				free(temp_block);
				return (NULL);
			}
		}
		else
			return (NULL);
	}
}
