#include "main.h"

/**
 * _strcmp - compares string
 * @s1: first string
 * @s2: second string
 *
 * Return: int value
 */

int _strcmp(char *s1, char *s2)
{
	int i, j, k, r, max;

	k = 0;
	r = 0;

	for (i = 0; s1[i] != '\0'; i++)
	{
	}
	for (j = 0; s2[j] != '\0'; j++)
	{
	}
	if (i <= j)
	{
		max = i;
	}
	else
	{
		max = j;
	}
	for (k = 0; k <= max; k++)
	{
		if (s1[k] == s2[k])
		{
			continue;
		}
		else
		{
			r = s1[k] - s2[k];
			break;
		}
	}
	return (r);
}
