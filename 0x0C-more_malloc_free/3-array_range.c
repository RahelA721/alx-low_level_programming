#include <stdlib.h>
#include "main.h"

/**
 * array_range - creates an array of integers
 * @min: minimum value
 * @max: maximum
 *
 * Return: pointer
 */

int *array_range(int min, int max)
{
	int i, r;
	int *arr;

	if (min > max)
	{
		return (NULL);
	}

	r = max - min;
	arr = malloc((sizeof(int) * r) + sizeof(int));

	if (arr == NULL)
	{
		return (NULL);
	}
	for (i = 0; min <= max; i++)
	{
		arr[i] = min;
		min++;
	}
	return (arr);
}
