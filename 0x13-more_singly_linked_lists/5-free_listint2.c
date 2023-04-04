#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_listint2 - a function that frees a listint_t list
 * @head: pointer
 * Return: void
 */

void free_listint2(listint_t **head)
{
	listint_t *old;
	listint_t *current;

	if (head != NULL)
	{
		current = *head;

		while ((old = current) != NULL)
		{
			current = current->next;
			free(old);
		}
		*head = NULL;
	}
}
