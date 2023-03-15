#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * word_count - counts number of words in string
 * @s: string
 * Return: number of words counted
 */
int word_count(char *s)
{
	int i, a, b;

	i = 0;
	b = 0;

	for (a = 0; s[a] != '\0'; a++)
	{
		if (s[a] == ' ')
			i = 0;
		else if (i == 0)
		{
			i = 1;
			b++;
		}
	}

	return (b);
}

/**
 * strtow - splits a string into words
 * @str: string
 * Return: pointer to an array of strings (words)
 * returns NULL if function fails
 */
char **strtow(char *str)
{
	char **matrix, *tmp;
	int a, b = 0, n = 0, words, c = 0, start, finish;

	while (*(str + n))
		n++;
	words = word_count(str);
	if (words == 0)
		return (NULL);

	matrix = (char **) malloc(sizeof(char *) * (words + 1));

	if (matrix == NULL)
		return (NULL);

	for (a = 0; a <= n; a++)
	{
		if (str[a] == ' ' || str[a] == '\0')
		{
			if (c)
			{
				finish = a;
				tmp = (char *) malloc(sizeof(char) * (c + 1));
				if (tmp == NULL)
					return (NULL);

				while (start < finish)
					*tmp++ = str[start++];
				*tmp = '\0';
				matrix[b] = tmp - c;
				b++;
				c = 0;
			}
		}
		else if (c++ == 0)
			start = a;
	}

	matrix[b] = NULL;

	return (matrix);
}
