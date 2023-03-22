#include "function_pointers.h"
#include <stdio.h>

/**
 * int_index - searches for an integer
 * @array: array
 * @size: size of the array
 * @cmp: pointer to the function
 * Return: index of the first element for which,
 * the cmp function does not return 0
 * If size <= 0, return -1
 * If no element matches, return -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int a;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);

	for (a = 0; a < size; a++)
	{
		if (cmp(array[a]))
			return (i);
	}
	return (-1);
}
