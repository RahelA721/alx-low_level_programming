#include "main.h"

/**
 * swap_int - swap two integers
 * @a: first int to be swapped
 * @b: second int
 *
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
