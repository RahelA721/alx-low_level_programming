#include "main.h"

/**
 * cap_string - capitalize
 * @s: string
 *
 * Return: string
 */

char *cap_string(char *s)
{
	int i, j;
	char sep[] = {' ', '\t', '\n', 44, ';', 46, '!', '?', '"', '(', ')', '{', '}'};

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 13; j++)
		{
			if ((s[i - 1] == sep[j]) && (s[i] > 'a' && s[i] < 'z'))
			{
				s[i] = s[i] - 32;
			}
		}
	}
	return (s);
}
