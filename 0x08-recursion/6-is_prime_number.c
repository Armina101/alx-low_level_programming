#include "main.h"

/**
 * is_prime_number - detects prime number
 * @n: input value
 * Return: 1 if the input integer is a prime number,
 * otherwise 0
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	else
		return (_prime_number(n, n - 1));
}

/**
 * _prime_number - detects if a number is prime number
 * @n: input value
 * @a: input value
 * Return: 1 if n is prime number, 0 otherwise
 */

int _prime_number(int n, int a)
{
	if (a == 1)
		return (1);
	else if (n % a == 0 && a > 0)
		return (0);
	else
		return (_prime_number(n, a - 1));
}
