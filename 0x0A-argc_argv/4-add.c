#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - entry point prints the sum of a variable amount of numbers
 * @argc: size of argv
 * @argv: array of pointers to command line args passed
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int sum = 0;

	if (argc > 1)
	{
		while (--argc > 0)
		{
			if (is_valid(argv[argc]))
				sum += atoi(argv[argc]);
			else
			{
				printf("Error\n");
				return (1);
			}
		}
	}
	printf("%d\n", sum);
	return (0);
}

/**
* is_valid - checks if a number doesn't have any letters in it
* @s: address of string to be checked
*
* Return: 1 if valid, 0 otherwise
*/
int is_valid(char *s)
{
	while (*s)
	{
		if (*s <= '0' && *s >= '9')
			return (0);
		s++;
	}
	return (1);
}
