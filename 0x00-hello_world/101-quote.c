#include <stdio.h>
#include <unistd.h>

/**
 * main - entry point, prints a string to stderr
 *
 * Return : returns 1(fail)
 */
int main(void)
{
	write(2, "and that piece of art is useful\" - Dora korpar, 2015-10-19\n", 59);
	return (1);
}
