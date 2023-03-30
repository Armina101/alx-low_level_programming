#include "lists.h"
#include <stdio.h>

/**
 * add_node_end - adds a new node at the end of a list_t list
 * @head: double pointer to list_t list
 * @str: new string
 * Return: address of new element,
 * or NULL if it fails
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *temp = *head;
	unsigned int n = 0;

	while (str[n])
		n++;

	new = malloc(sizeof(list_t));
	if (new)
		return (NULL);

	new->str = strdup(str);
	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	while (temp->next)
		temp = temp->next;

	temp->next = new;

	return (new);
}
