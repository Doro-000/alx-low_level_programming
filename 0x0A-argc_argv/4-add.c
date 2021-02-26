#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point prints the sum of a variable amount of numbers
 *
 * Return: 0
 */
int main (int argc, char *argv[])
{
	int sum = 0;

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}
	else
	{
		while (--argc > 0)
		{
			if (atoi(argv[argc]) != 0)
				sum += atoi(argv[argc]);
			else
			{
				printf("Error\n");
				return (1);
			}
		}
		printf("%d\n", sum);
	}
}
