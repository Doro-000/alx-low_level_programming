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
	int i;

	if (new_size == old_size)
		return (ptr);
	else if (new_size == 0 && ptr != NULL) 
	{
		free(ptr);
		return (NULL);	
	}
	else if (ptr == NULL)
	{
		ptr = malloc(new_size);
		return (ptr);
	}
	else
	{
		temp_block = malloc(old_size);
		if (temp_block != NULL)
		{
			free(ptr);
			ptr = malloc(new_size);
			if (ptr != NULL)
			{
				for (i = 0; i < old_size; i++)
					*(int *)(ptr + i) = *(int *)(temp_block + i);
				return (ptr);
			}
			else
				return (NULL);
		}
		else
			return (NULL);
	}
}