#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include "main.h"

/**
 * int binary_to_uint - converts a binary number to an unsigned int
 * @b: pointer to a string of 0 and 1 chars
 * Return: the converted number,
 * 0 if there is one or more chars in the string b that is not 0 or 1
 * 0 if b is NULL
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int n = 0;
	int a = 0, bin;

	if (!b)
		return (0);

	while (b[a] != '\0')
		a++;
	/*
	To find and get length of the string
	*/
	for (a--, bin = 1; a >= 0; a--, bin *= 2)
	{
		if (b[a] != '0' && b[a] != '1')
		{
			return (0);
		}
		if (b[a] & 1)
			n += bin;
	}
	return (n);
}
