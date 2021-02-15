#include "holberton.h"

/**
 * print_rev - prints a string in reverse
 * @s: string to be printed
 *
 * Return: void
 **/
void print_rev(char *s)
{
	int length;

	length = _strlen(s) - 1;

	while (length)
	{
		_putchar(s[length]);
		length--;
	}
	_putchar('\n');
}

/**
 * _strlen - counts the length of a string
 * @s: string to  be counted
 *
 * Return: the length of the string
 */
int _strlen(char *s)
{
	int length = 0, i = 0;

	while (s[i] != '\0')
	{
		length++;
		i++;
	}
	return (length);
}
