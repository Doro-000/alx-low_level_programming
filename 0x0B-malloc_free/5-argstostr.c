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
	int i = 0, j = 0, sum = 0;

	if (ac == 0 || av == NULL)
		return (NULL);
	while (--ac)
		sum += len(av[ac]);
	new_string = (char *) malloc(sum + 1);
	if (new_string != NULL)
	{
		while (i < ac)
		{
			for (; av[i][j] != '\0'; j++)
				new_string[j] = av[i][j];
			new_string[j] = '\n';
			i++;
			j++;
		}
		new_string[sum + 1] = '\0';
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
	int len = 1;

	if (str != NULL)
	{
		while (str[len])
			len++;
	}
	return (len);
}
