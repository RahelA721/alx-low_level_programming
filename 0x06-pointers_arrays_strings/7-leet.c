#include "main.h"

/**
 * leet - substitute letters aeotl with 43071
 * @s: string
 *
 * Return: string
 */

char *leet(char *s)
{
	int i, j;
	char a[5] = {'A', 'E', 'O', 'T', 'L'};
	char n[5] = {'4', '3', '0', '7', '1'};

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 5; j++)
		{
			if ((s[i] == a[j]) || (s[i] == a[j] + 32))
			{
				s[i] = n[j];
			}
		}
	}
	return (s);
}
