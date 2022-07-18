#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: the stirng
 * @c: character to be located
 *
 * Return: first occurance of the character
 */

char *_strchr(char *s, char c)
{
	int i, j;
	char *f;

	for (i = 0; s[i] != '\0'; i++)
	{}

	for (j = 0; j <= i; j++)
	{
		if (s[j] == c)
		{
			f = s + j;
			return (f);
		}
	}
	return ('\0');
}
