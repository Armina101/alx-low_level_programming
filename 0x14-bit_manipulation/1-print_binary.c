#include <stdio.h>
#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * print_binary - prints the binary representation of a number
 * @n: number
 * Return: nil
 */

void print_binary(unsigned long int n)
{
	if (n >> 0)
	{
		if (n >> 1)
			print_binary(n >> 1);
		_putchar((n & 1) + '0');
	}
	else
	{
		_putchar('0');
	}
}
