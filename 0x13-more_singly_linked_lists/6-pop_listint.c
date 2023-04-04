#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * pop_listint - a function that deletes the head node of
 * a listint_t linked list
 * @head: pointer
 * Return: the head node’s data (n),
 * if the linked list is empty return 0
 */

int pop_listint(listint_t **head)
{
	listint_t *newnode = NULL;
	int n = 0;

	if (!(*head))
		return (n);

	newnode = (*head)->next;
	n = (*head)->n;
	free(*head);

	*head = newnode;

	return (n);
}
