#include <stdio.h>

/**
 * main - entry point prints the number of arguments passed to it
 * @argc: size of argv
 * @argv: array of pointers to command line args passed
 *
 * Return: 0
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
