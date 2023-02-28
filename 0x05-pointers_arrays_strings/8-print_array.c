#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n elements of an array
 * @a: name of array
 * @n: number of elements to be printed in the array
 * Return: a and n
 */

void print_array(int *a, int n)
{
	int b;

	for (a = 0; a < (n - 1); a++)
	{
		printf("%d, ", a[b]);
	}
		if (b == (n - 1))
		{
			printf("%d", a[n - 1]);
		}
			printf('\n');
}
