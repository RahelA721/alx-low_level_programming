#include <stdio.h>
#include "lists.h"

/**
 * listint_len - number of elements
 * @h: head
 *
 * Return: no of elements
 */

size_t listint_len(const listint_t *h)
{
	size_t nodesno;

	for (nodesno = 0; h != NULL; nodesno++)
	{
		h = h->next;
	}
	return (nodesno);
}
