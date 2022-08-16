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
	size_t nodesno;
	
	if (h != NULL)
	{
		for (nodesno = 0; h != NULL; nodesno++)
		{
			printf("%d\n", h->n);
			h = h->next;
		}
	}
	return(nodesno);
}
