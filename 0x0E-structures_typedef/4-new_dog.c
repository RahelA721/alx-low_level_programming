#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * _strlen - length
 *
 * @s: string
 *
 * Return:len
 */

int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{}
	return (i);
}

/**
 * _strcpy - copy
 * @dest: dest
 * @src:src
 *
 * Return: dest
 */

char *_strcpy(char *dest, char *src)
{
	int j;

	for (j = 0; src[j] != '\0'; j++)
	{
		dest[j] = src[j];
	}
	dest[j] = '\0';
	return (dest);
}

/**
 * new_dog - new dog
 * @name: name
 * @age: age
 * @owner: owner
 *
 * Return: dog_t type
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;
	int nl = 0;
	int ol = 0;

	if (name != NULL && owner != NULL)
	{
		nl = _strlen(name) + 1;
		ol = _strlen(owner) + 1;
		d = malloc(sizeof(dog_t));

		if (d == NULL)
		{
			return (NULL);
		}

		d->name = malloc(sizeof(char) * nl);
		if (d->name == NULL)
		{
			free(d);
			return (NULL);
		}

		d->owner = malloc(sizeof(char) * ol);
		if (d->owner == NULL)
		{
			free(d);
			return (NULL);
		}

		d->name = _strcpy(d->name, name);
		d->owner = _strcpy(d->owner, owner);
		d->age = age;
	}
	return (d);
}



