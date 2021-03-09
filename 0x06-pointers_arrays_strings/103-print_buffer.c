#include "holberton.h"

/**
 * print_buffer - print the content of @size bytes of the buffer pointed by @b
 * @b: address of the buffer
 * @size: size to be used
 *
 * Return: void
 */
void print_buffer(char *b, int size)
{
	int i = 0, j;

	if (size <= 0)
	{
		printf("\n");
		return;
	}
	while (i < size)
	{
		if (i % 10 == 0)
			printf("%08x: ", i);
		for (j = i; j <= i + 9; j += 2)
		{
			if (j < size)
				printf("%02x%02x ", b[j], b[j + 1]);
			else
			{
				while (j <= i + 10)
				{
					printf("  ");
					j++;
				}
			}
		}
		for (j = i; j <= i + 9 && j < size; j++)
		{
			if (b[j] >= 32 && b[j] <= 126)
				printf("%c", b[j]);
			else
				printf(".");
		}
		printf("\n");
		i += 10;
	}
}
