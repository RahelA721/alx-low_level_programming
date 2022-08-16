#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_listint2 - free list and func set head to NULL
 * @head: head
 *
 * Return: void
 */

void free_listint2(listint_t **head)
{
	listint_t *new;

	while (*head)
	{
		new = (*head);
		*head = (*head)->next;
		free(new);
	}
	free(*head);
	head = 0;
}
