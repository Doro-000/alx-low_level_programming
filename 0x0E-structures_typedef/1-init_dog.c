#include "dog.h"

/**
 * init_dog - initializes a variable of type struct dog
 * @d: pointer to the struct dog
 * @name: name member of the stuct dog
 * @age: age member of the stuct dog
 * @owner: owner member of the stuct dog
 *
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = malloc(sizeof(*name) * (_strlen(name) + 1));
	d->owner = malloc(sizeof(*owner) * (_strlen(owner) + 1));
	d->name = name;
	d->age = age;
	d->owner = owner;
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
