#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_listint - a function that prints all the elements of a listint_t list
 * @h: pointer
 * Return: Number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t element_count;

	element_count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		element_count++;
		h = h->next;
	}
	return (element_count);
}
