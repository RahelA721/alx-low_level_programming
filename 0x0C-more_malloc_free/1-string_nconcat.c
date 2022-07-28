#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat - concatenates
 * @s1: string 1
 * @s2: string 2
 * n: nbytes of s2
 *
 * Return: pointer to new cinactenated string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, k, l, m;
	char *c;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	for (i = 0; s1[i] != '\0'; i++)
	{}
	for (j = 0; s2[j] != '\0'; j++)
	{}
	if (n >= j)
	{
		l = i + j;
	}
	else
	{
		l = i + n;
	}

	c = malloc((sizeof(char) * l) + 1);
	m = 0;

	if (c == NULL)
	{
		return (NULL);
	}
	for (k = 0; k < l; k++)
	{
		if (k <= i)
		{
			c[k] = s1[k];
		}
		if (k >= i)
		{
			c[k] = s2[m];
			m++;
		}
	}

	c[k] = '\0';
	return (c);
}
