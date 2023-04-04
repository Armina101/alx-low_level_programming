#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * get_nodeint_at_index - a function that returns
 * the nth node of a listint_t linked list
 * @head: pointer
 * @index: the index of the node, starting at 0
 * Return: nth node of the linked list
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int number;

	number = 0;

	for (number = 0; number < index; number++)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
	}

	return (head);
}
