#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * listint_len - a function that returns the number
 * elements in a linked listint_t list
 * @h: pointer
 * Return: number of elements
 */

size_t listint_len(const listint_t *h)
{
	size_t element_count;

	element_count = 0;

	while (h != NULL)
	{
		element_count++;
		h = h->next;
	}
	return (element_count);
}
