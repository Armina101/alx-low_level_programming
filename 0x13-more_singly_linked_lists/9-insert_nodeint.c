#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: pointer
 * @idx:  index of the list where the new node should be added
 * @n: element
 * Return: the address of the new node,
 * or NULL if it failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *currnode, *newnode = NULL;

	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
		return (NULL);
	newnode->n = n;
	newnode->next = NULL;

	if (!idx)
	{
		newnode->next = *head;
		*head = newnode;
	}
	else
	{
		currnode = *head;
		while (--idx)
		{
			if (currnode->next == NULL)
				return (NULL);
			currnode = currnode->next;
		}

		newnode->next = currnode->next;
		currnode->next  = newnode;
	}
	return (newnode);
}
