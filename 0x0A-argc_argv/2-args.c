#include <stdio.h>

/**
 * main - entry point prints all the arguments passed to it
 *
 * Return: 0
 */
int main (int argc, char *argv[])
{
	while (argc--)
		printf("%s\n", *argv++);
	return (0);
}
