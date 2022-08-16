#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - delete the head node
 * @head: head
 *
 * Return: int
 */

int pop_listint(listint_t **head)
{
	listint_t *templink;
	int n = 0;

	if (*head != NULL)
	{
		templink = (*head)->next;
		n = (*head)->n;
		free(*head);
		*head = templink;
	}
	return (n);
}
