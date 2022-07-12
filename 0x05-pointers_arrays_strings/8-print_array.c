#include <stdio.h>
#include "main.h"

/**
 * print_array - prints elements of the array
 * @a: array
 * @n: size of the array
 *
 * Return: void
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);

		if (i != (n - 1))
		{
			printf(", ");
		}
	}

	printf("\n");
}
