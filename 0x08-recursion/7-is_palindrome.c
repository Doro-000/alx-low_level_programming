#include "holberton.h"

/**
 * is_palindrome - returns the 1 if s is a palindrome
 * @s: string to be checked 
 *
 * Return: 1 if s is a palindrome, 0 otherwise
 */
int is_palindrome(char *s)
{
	int start = n / 2;

	if (n <= 1)
		return (0);
	return(is_prime (n, start));
}

/**
 * _print_rev_recursion - prints a string in reverse
 * @s: string to be printed
 *
 * Return: void
 */
char reverse_string(char *output, char *src)
{ 
	if (*src == '\0')
	{
		reverse_string(src + 1);
	}
	*src = *(src - 1));
}
