#include <stdio.h>

/**
 * main - entry point prints all the arguments passed to it
 * @argc: size of argv
 * @argv: array of pointers to command line args passed
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	while (argc--)
		printf("%s\n", *argv++);
	return (0);
}
