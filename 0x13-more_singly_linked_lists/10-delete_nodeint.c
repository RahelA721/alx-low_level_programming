#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - delete node at index
 * @head: head
 * @index: index
 *
 * Return: int
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *new;
	listint_t *temp;
	unsigned int idx;

	idx = 1;
	new = *head;
	if (!head || !*head)
	{
		return (-1);
	}
	if (index == 0)
	{
		*head = new->next;
		free(new);
		return (1);
	}
	temp = *head;
	while (temp)
	{
		if (idx == index)
		{
			new = temp->next;
			temp->next = new->next;
			free(new);
			return (1);
		}
		temp = temp->next;
		idx++;
	}
	return (-1);
}
