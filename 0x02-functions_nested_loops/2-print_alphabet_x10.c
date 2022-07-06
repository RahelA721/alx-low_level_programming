#include "main.h"

/**
 * print_alphabet_x10 - prints lowercas alpphabets 10 times
 *
 * Return: void
 */

void print_alphabet_x10(void)
{
	char ch;
	int ctr;

	for (ctr = 0; ctr < 10; ctr++)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
		{
			_putchar(ch);
		}

		_putchar('\n');
	}
}
