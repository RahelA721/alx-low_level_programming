#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_list - prints all elements
 * @h: list
 *
 * Return: the number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t nodesno;

	for (nodesno = 0; h != NULL; nodesno++)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		h = h->next;
	}
	return (nodesno);
}
