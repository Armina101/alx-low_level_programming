#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: minimum number of values in the array
 * @max: maximum number of values in the array
 * Return: pointer to the newly created array
 */

int *array_range(int min, int max)
{
	int *ptr;
	int a, n;

	if (min > max)
		return (NULL);

	n = max - min + 1;

	ptr = malloc(sizeof(int) * size);

	if (ptr == NULL)
		return (NULL);

	for (a = 0; min <= max; a++)
		ptr[a] = min++;

	return (ptr);
}
