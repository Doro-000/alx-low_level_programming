#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the opcodes of the main function
 * @argc: number of arguments passed to the program
 * @argv: array of arguments passed to the function
 *
 * Return: 0 on success, 1 or 2 otherwise
 */
int main(int argc, char *argv[])
{
	int (*f)(int, char *);
	int i = 0, bytes;
	
	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	if (atoi(argv[1]) < 0)
	{
		printf("Error\n");
		exit(2);
	}
	f = main;
	bytes = atoi(argv[1]);
	for (; i < bytes; i++)
	{
		printf("%x ", (int)(*(f + i)) & (0x000000FF));
	}
	printf("\n");
	return (0);
}
