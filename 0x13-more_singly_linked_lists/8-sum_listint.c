#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * sum_listint - sum all data of the list
 * @head: head
 *
 * Return: int sum
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head)
	{
		while (head)
		{
			sum += head->n;
			head = head->next;
		}
	}
	return (sum);
}
