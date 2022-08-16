#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_listint - free list
 * @head: head
 *
 * Return: void
 */

void free_listint(listint_t *head)
{
	listint_t *new;

	while (head)
	{
		new = head;
		head = head->next;
		free(new);
	}
	free(head);
}
