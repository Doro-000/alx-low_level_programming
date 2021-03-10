#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - Entry point, performs simple operations
 * @argc: number of arguments passed to the program
 * @argv: array of arguments passed to the program
 *
 * Return: 0 if successful, 98, 99 or 100 if not (depending on the issue)
 */
int main(int argc, char *argv[])
{
	int (*f)(int, int);
	int result;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if ((argv[2][0] == '/' || argv[2][0] == '%') && atoi(argv[3]) == 0)
	{
		printf("Error\n");
		exit(100);
	}
	f = get_op_func(argv[2]);
	if (f)
	{
		result = f(atoi(argv[1]), atoi(argv[3]));
		printf("%d\n", result);
		return (0);
	}
	else
	{
		printf("Error\n");
		exit(99);
	}
}
