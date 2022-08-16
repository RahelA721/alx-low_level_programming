#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint_end - add node at the end
 * @head: head
 * @n: int n
 *
 * Return: new nodes
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *tail;
	listint_t *temp;

	tail = malloc(sizeof(listint_t));
	if (tail == NULL)
	{
		return (NULL);
	}

	tail->n = n;
	tail->next = NULL;

	if (*head == NULL)
	{
		*head = tail;
		return (*head);
	}
	else
	{
		temp = *head;
		while (temp->next)
			temp = temp->next;
		temp->next = tail;
		return (tail);
	}
}
