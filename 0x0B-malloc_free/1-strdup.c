#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * @str: string
 * Return: pointer to the duplicated string
 * returns NULL if insufficient memory was available
 */

char *_strdup(char *str)
{
	char *duplicate;
	int a, n;

	a = 0;
	n = 0;

	if (str == NULL)
		return (NULL);

	while (str[a] != '\0')
		a++;
	duplicate = malloc(sizeof(char) * (a + 1));

	if (duplicate == NULL)
		return (NULL);

	for (n = 0; str[n]; n++)
		duplicate[n] = str[n];

	return (duplicate);
}
