#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * sum_listint - a function that returns
 * the sum of all the data (n) of a listint_t linked list
 * @head: pointer
 * Return: sum of all the data (n) of linked list,
 * if the list is empty, return 0
 */
int sum_listint(listint_t *head)
{
	int total;

	total = 0;

	while (head != NULL)
	{
		head = head->next;
		total += head->n;
	}

	return (total);
}
