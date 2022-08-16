#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of the list
 * @head: head
 * @index: index
 *
 * Return: nth node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int current;

	if (head)
	{
		for (current = 0; head != NULL; current++)
		{
			if (current == index)
			{
				return (head);
			}
			head = head->next;
		}
	}
	return (NULL);
}
