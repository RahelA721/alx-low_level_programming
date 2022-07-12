#include "main.h"

/**
 * puts2 - prints every other character of string
 * @str: the string
 *
 * Return: void
 */

void puts2(char *str)
{
	int i, j;

	for (i = 0; str[i] != '\0'; i++)
	{
	}

	for (j = 0; j < i; j = j + 2)
	{
		_putchar(str[j]);
	}

	_putchar('\n');
}
