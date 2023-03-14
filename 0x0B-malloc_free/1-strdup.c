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
	unsigned int a, n;

	a = 0;
	n = 0;

	if (str == NULL)
		return (NULL);

	while (str[n])
		n++;
	duplicate = malloc(sizeof(char) * (n + 1));

	if (duplicate == NULL)
		return (NULL);

	while ((duplicate[a] = str[a] != '\0'))
		a++;
	return (duplicate);
}
