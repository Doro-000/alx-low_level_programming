#include "dog.h"

/**
 * new_dog - creates a new dog
 * @name: name member of the dog
 * @age: age member of the dog
 * @owner: owner member of the dog
 *
 * Return: pointer to the new dog_t
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	char *temp_name, *temp_owner;
	dog_t new_doggo;

	temp_name = malloc(sizeof(*name) * _strlen(name));
	temp_owner = malloc(sizeof(*owner) * _strlen(owner));
	if (temp_name && temp_owner)
	{
		_strcpy(temp_name, name);
		_strcpy(temp_owner, owner);
	}
	else 
		return (NULL);
	new_doggo.name = temp_name;
	new_doggo.age = age;
	new_doggo.owner = temp_owner;
	return (&new_doggo);
}

/**
 * _strcpy - copies a string to another buffer
 * @dest: destination to be copied to
 * @src: source to be copied from
 *
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (*(src + i) != '\0')
	{
		*(dest + i) = *(src + i);
		i++;
	}
	*(dest + i) = '\0';
	return (dest);
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
