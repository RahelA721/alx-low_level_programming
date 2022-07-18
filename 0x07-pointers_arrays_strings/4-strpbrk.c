#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of byte
 * @s: the string
 * @accept: accepted
 *
 * Return: string starting from the first accepted character
 */

char *_strpbrk(char *s, char *accept)
{
	int i, j;
	char *f;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				f = s + i;
				return (f);
			}
		}
	}
	return ('\0');
}
