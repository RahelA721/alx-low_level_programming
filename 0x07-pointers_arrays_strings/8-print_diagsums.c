#include <stdio.h>
#include "main.h"

/**
 * print_diagsums - prints the sum of the diagonals of square matrix
 * @a: array
 * @size: size
 *
 * Return: void
 */

void print_diagsums(int *a, int size)
{
	int i, prin, sec;

	prin = 0;
	sec = 0;
	for (i = 0; i < size; i++)
	{
		prin = prin + a[(size + 1) * i];
		sec = sec + a[(size - 1) * (i + 1)];
	}
	printf("%d, %d\n", prin, sec);
}
