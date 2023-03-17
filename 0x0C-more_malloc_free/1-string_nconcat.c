#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: number of bytes
 * Return: if function fails, return NULL
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;

	unsigned int a = 0, b = 0, i = 0, j = 0;

	while (s1 && s1[i])

		i++;

	while (s2 && s2[j])

		j++;

	if (n < j)

		s = malloc(sizeof(char) * (i + n + 1));
	else

		s = malloc(sizeof(char) * (i + j + 1));

	if (!s)

		return (NULL);

	while (a < i)
	{
		s[a] = s1[a];

		a++;
	}

	while (n < j && a < (i + n))

		s[a++] = s2[b++];

	while (n >= j && a < (i + j))

		s[a++] = s2[b++];
	s[a] = '\0';
	return (s);
}
