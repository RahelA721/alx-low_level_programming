#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * list_len - returns number of elements
 * @h: list
 *
 * Return: number of elements
 */

size_t list_len(const list_t *h)
{
	size_t nodesno;

	for (nodesno = 0; h != NULL; nodesno++)
	{
		h = h->next;
	}
	return (nodesno);
}
