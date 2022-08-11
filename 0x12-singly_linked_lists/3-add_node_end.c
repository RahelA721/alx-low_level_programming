#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - adds new node at the end
 * @head: head
 * @str: str
 *
 * Return: new node address
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *tail, *temp;

	tail = malloc(sizeof(list_t));
	if (tail == NULL)
	{
		return (NULL);
	}

	tail->str = strdup(str);
	tail->len = _strlen(str);
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

/**
 * _strlen - stirng length
 * @s: string
 *
 * Return: length
 */
int _strlen(const char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{}
	return (i);
}
