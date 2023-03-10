#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: input value
 * @s2: input value
 *
 * Return: 0 if both s1 and s2 are equal,
 * any random number if s1 and s2 are not equal
 */

int _strcmp(char *s1, char *s2)
{
	int a = 0;

	while (s1[a] != '\0' && s2[a] != '\0')
	{
		if (s1[a] != s2[a])
		{
			return (s1[a] - s2[a]);
		}
		a++;
	}
	return (0);
}
