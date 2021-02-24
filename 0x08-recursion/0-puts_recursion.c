#include "holberton.h"

/**
 * _puts_recursion - prints's a string followed by a new line
 * @s: string to be printed
 *
 * Return: void
 */
void _puts_recursion(char *s)
{
	_putchar(s[0]);
	if (*s == '\0')
	{
		_putchar('\n');
	}
	else
		_puts_recursion(s + 1);
}
