#include "holberton.h"

/**
 * str_concat - concatenates 2 strings
 * @s1: string 1
 * @s2: string 2
 *
 * Return: pointer to the new string
 */
char *str_concat(char *s1, char *s2)
{
	char *new_string;
	int i = 0, j = 0, size_1 = len(s1), size_2 = len(s2);

	new_string = malloc(sizeof(char) * (size_1 + size_2 + 1));
	if (new_string != NULL)
	{
		for (; i <= size_1 && size_1; i++)
			new_string[i] = s1[i];
		for (; j <= size_2 && size_2; j++)
			new_string[i + j] = s2[j];
		new_string[i + j] = '\0';
	}
	else
		return (NULL);
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
		while(str[len])
			len++;
	}
	return (len)
}
