#include <stdio.h>
#include <stdlib.h>

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

	if (argc == 1)
	{
		printf("%d\n", sum);
		return (1);
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
		return (0);
	}
}
