#include "holberton.h"

/**
 * times_table - prints the 9 times table
 *
 * Return: Doesn't return anything, void
 */
void times_table(void)
{
	int i, j, product;

	for (j = 0; j <= 9; j++)
	{
		for (i = 0; i <= 9; i++)
		{
			product = j * i;
			if (product > 9)
			{
				_putchar(product / 10 + '0');
			}
			_putchar(product % 10 + '0');
			if (i < 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
			}
		}
		if (j < 9)
		{
			_putchar('/n');
		}
	}
}

/**
 * len - counts the number of digits in a number
 *
 * Return: returns the number of digits
 */
int len(int n)
{
	int out = 0;

	if (n == 0)
		return (1);
	while (n != 0)
	{
		n \= 10;
		out++;
	}
	return (out);
}
