#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - returns the sum of all its parameters
 * @n: number count of parameters
 * @...: variable number of parameters
 * Return: sum of all parameters,
 * If n == 0, return 0
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list list;
	unsigned int a, sum = 0;

	va_start(list, n);

	for (a = 0; a < n; a++)
		sum += va_arg(list, int);

	va_end(list);

	return (sum);
}
