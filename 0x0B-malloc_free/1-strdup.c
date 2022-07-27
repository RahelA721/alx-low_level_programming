#include <stdlib.h>
#include "main.h"

/**
 * _strdup - copy of string
 * @str: string
 *
 * Return: pointer to new string
 */

char *_strdup(char *str)
{
	int i, n;
	char *copy;

	if (str == NULL)
	{
		return (NULL);
	}

	for (i = 0; str[i] != '\0'; i++)
	{}

	copy = malloc(sizeof(char) * i);

	if (copy == NULL)
	{
		return (NULL);
	}

	for (n = 0; n <= i; n++)
	{
		copy[n] = str[n];
	}
	copy[n] = '\0';

	return (copy);
}
