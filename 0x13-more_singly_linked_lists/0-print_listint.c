#include <stdio.h>
#include "lists.h"

/**
 * print_listint - print elements in list
 * @h: head
 *
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	int nodesno = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		nodesno++;
	}
	return (nodesno);
}
