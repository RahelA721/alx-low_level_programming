#include <stdlib.h>
#include "main.h"

/**
 * str_concat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 *
 * Return: new string
 */

char *str_concat(char *s1, char *s2)
{
	int i, j, k, n, l;
	char *ns;

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

	l = i + j;
	n = 0;
	ns = malloc((sizeof(char) * l) + 1);

	if (ns == NULL)
	{
		return (NULL);
	}
	for (k = 0; k < l; k++)
	{
		if (k <= i)
		{
			ns[k] = s1[k];
		}
		if (k >= i)
		{
			ns[k] = s2[n];
			n++;
		}
	}
	ns[k] = '\0';
	return (ns);
}
