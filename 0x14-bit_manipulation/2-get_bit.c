#include "main.h"
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * get_bit - returns the value of a bit at a given index
 * @index: the index, starting from 0 of the bit you want to get
 * @n: value of bit
 * Return: value of the bit at index index or -1 if an error occurs
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	return (1 & (n >> index));
}
