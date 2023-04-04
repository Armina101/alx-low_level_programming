#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * delete_nodeint_at_index - a function that deletes
 * the node at index index of a listint_t linked list
 * @head: pointer
 * @index: index of the node that should be deleted
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int a;
	listint_t *oldnode;
	listint_t *newnode;

	oldnode = *head;

	if (index != 0)
	{
		for (a = 0; a < index - 1 && prev != NULL; a++)
		{
			oldnode = oldnode->newnode;
		}
	}
	if (oldnode == NULL || (oldnode->newnode == NULL && index != 0))
	{
		return (-1);
	}

	newnode = oldnode->newnode;

	if (index != 0)
	{
		oldnode->newnode = newnode->newnode;
		free(newnode);
	}

	else
	{
		free(oldnode);
		*head = newnode;
	}

	return (1);
}
