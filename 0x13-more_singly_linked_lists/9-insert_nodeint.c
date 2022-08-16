#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - insert new node at index
 * @head: head
 * @idx: index
 * @n: value
 *
 * Return: new node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new;
	listint_t *scan;
	unsigned int index;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;
	if (idx > 0)
	{
		scan = *head;
		for (index = 1; scan != NULL; index++)
		{
			if (index == idx)
			{
				new->next = scan->next;
				scan->next = new;
				return (new);
			}
			scan = scan->next;
		}
		if (idx > index)
		{
			return (NULL);
		}
	}
	else
	{
		new->next = *head;
		*head = new;
	}
	return (new);
}
