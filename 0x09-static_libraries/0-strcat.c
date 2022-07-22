#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: destination string
 * @src: source string
 *
 * Return: destination string
 */

char *_strcat(char *dest, char *src)
{
	int len, i;

	for (len = 0; dest[len] != '\0'; len++)
	{
	}

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[len] = src[i];
		len++;
	}

	dest[len] = '\0';
	return (dest);
}
