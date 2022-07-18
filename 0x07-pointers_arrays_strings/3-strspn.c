#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: source
 * @accept: accepted
 *
 * Return: number of bytes
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, c;

	c = 0;
	for (i = 0; s[i] != 32; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				c++;
			}
		}
	}
	return (c);
}
