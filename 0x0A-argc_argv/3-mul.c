#include <stdio.h>

/**
 * main - entry point prints the product of 2 numbers
 *
 * Return: 0
 */
int main (int argc, char *argv[])
{
	if (argc < 3)
	{
		printf("Error");
		return (1);
	}
	else
	{
		printf("%d\n", (*argv[1]) * (*argv[2]));
		return (0);
	}
}
