#include <stdio.h>

/**
 * main - entry point prints the name of the program
 * @argc: size of argv
 * @argv: array of pointers to command line args passed
 *
 * Return: 0
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
