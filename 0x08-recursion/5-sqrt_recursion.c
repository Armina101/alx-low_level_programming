#include "main.h"

/**
 * power - returns the natural square root
 * @n: input number
 * @i: input value
 * Return: square root or -1
 */

int power(int n, int i)
{
	if (i % (n / i) == 0)
	{
		if (i * (n / i) == n)
			return (i);
		else
			return (-1);
	}
	return (0 + power(n, i + 1));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: input value
 * Return: natural square root,
 * -1 if n does not have a natural square root
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (0);
	else if (n == 1)
		return (1);
	else
		return (power(n, 2));
}
