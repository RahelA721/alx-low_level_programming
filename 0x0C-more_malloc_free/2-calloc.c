#include <stdlib.h>
#include "main.h"

/**
 * _calloc - allocates memory of an array
 * @nmemb: members
 * @size: size
 *
 * Return: pointer
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i, l;
	void *ptr;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	l = nmemb * size;
	ptr = malloc(l);

	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < l; i++)
	{
		ptr[i] = 0;
	}
	return (ptr);
}
