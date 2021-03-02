#include "holberton.h"

/**
 * argstostr - concatenates all the strings passed to a function
 * @ac: count of args passed the the function
 * @av: array of arguments
 *
 * Return: pointer to the new string
 */
char *argstostr(int ac, char **av)
{
	char *new_string = NULL;
	int i = 0, j = 0;

	if (ac == 0 || av == NULL)
		return (NULL);
	new_string = (char *) malloc(size_1 + size_2 + 1);
	if (new_string != NULL)
	{
		for (; i < size_1; i++)
		{
			new_string[i] = s1[i];
		}
		for (; j < size_2; j++)
		{
			new_string[i + j] = s2[j];
		}
		new_string[i + j] = '\0';
	}
	else
	{
		return (NULL);
	}
	return (new_string);
}

/**
 * len - returns length of str
 * @str: string to be counted
 *
 * Return: length of the string
 */
int len(char *str)
{
	int len = 0;

	if (str != NULL)
	{
		while (str[len])
			len++;
	}
	return (len);
}
