#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_listint - a function that frees a listint_t list
 * @head: pointer
 * Return: void
 */

void free_listint(listint_t *head)
{
	listint_t *old;

	while ((old = head) != NULL)
	{
		head = head->next;
		free(old);
	}
}
