#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _memset - fills memory with bytes
 * @s: string
 * @a: variable
 * @n: number of times for copy
 * Return: pointer to s
 */
char *_memset(char *s, char a, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = a;
	}

	return (s);
}

/**
 * _calloc - allocates memory for an array, using malloc
 * @nmemb: elements in the array
 * @size: number of bytes
 * Return: pointer to the allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(size * nmemb);

	if (ptr == NULL)
		return (NULL);

	_memset(ptr, 0, nmemb * size);

	return (ptr);
}
