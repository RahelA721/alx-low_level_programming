#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_list - frees list
 * @head: head
 *
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *new;

	while (head)
	{
		new = head;
		head = head->next;
		free(new->str);
		free(new);
	}
	free(head);
}
