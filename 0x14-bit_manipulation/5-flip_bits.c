#include "main.h"
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>

/**
 * flip_bits - returns the number of bits,
 * you would need to flip to get from one number to another
 * @n: First number
 * @m: Second number
 * Return: number of bits you need to flip
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int num_flip = n ^ m;
	unsigned int a;

	a = 0;

	while (num_flip > 0)
	{
		if ((num_flip & 1) == 1)
			a++;
		num_flip >>= 1;
	}

	return (a);
}
