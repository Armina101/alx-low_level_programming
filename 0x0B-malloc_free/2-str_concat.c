#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: pointer to the new string,
 * or NULL on failure
 */

char *str_concat(char *s1, char *s2)
{
	char *s3;
	unsigned int a = 0, b = 0, m = 0, n = 0;

	while (s1 && s1[m])
		m++;
	while (s2 && s2[n])
		n++;

	s3 = malloc(sizeof(char) * (m + n + 1));
	if (s3 == NULL)
		return (NULL);

	a = 0;
	b = 0;

	if (s1)
	{
		while (a < m)
		{
			s3[a] = s1[a];
			a++;
		}
	}

	if (s2)
	{
		while (a < (m + n))
		{
			s3[a] = s2[b];
			a++;
			b++;
		}
	}
	s3[a] = '\0';

	return (s3);
}
