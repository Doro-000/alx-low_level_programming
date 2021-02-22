#include "holberton.h"

/**
 * _strstr - locates a substring
 * @haystack: string to be searched in
 * @needle: string to be searched
 *
 * Return: Returns a pointer to the beginning of the located substring
 */
char *_strstr(char *haystack, char *needle)
{
	int i = 0, flag = 0;

	for (; haystack[i] != '\0'; i++)
	{
		int j = 0;

		if (_strchr(needle, haystack[i]) != NULL)
		{
			while (needle[j] != '\0')
			{
				if (haystack[i + j] != needle[j] && haystack[i + j] != '\0')
				{
					flag = 0;
					break;
				}
				flag = 1;
				j++;
			}
			if (flag)
				break;
		}
	}
	if (flag)
		return (haystack + i);
	else
		return (NULL);
}

/**
 * _strchr - locates a char in a string
 * @s: string to be searched
 * @c: char to be checked
 *
 * Return: pointer to the first occurence of c in s
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	for (; s[i] != c && s[i] != '\0'; i++)
		;
	if (s[i] == c)
		return (s + i);
	else
		return (NULL);
}
