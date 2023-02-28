#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: string to be converted
 *
 * Return: int converted fron the string
 */

int _atoi(char *s)
{
	int a, b, c, len, n, digit;

	a = 0;
	b = 0;
	c = 0;
	len = 0;
	n = 0;
	digit = 0;

	while (s[len] != '\0')
		len++;
	{
		if (s[a] == '-')
			++b;

		if (s[a] >= '0' && s[a] <= '9')
		{
			digit = s[a] - '0';
			if (b % 2)
				digit = -digit;
			c = c * 10 + digit;
			n = 1;
			if (s[a + 1] < '0' || s[a + 1] > '9')
				break;
			n = 0;
		}
		a++;
	}

	if (n == 0)
		return (0);

	return (c);
}
