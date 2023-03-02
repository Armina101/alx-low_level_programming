#include "main.h"
#include <stdio.h>

/**
 * rot13 - encoder rot13
 * @n: pointer to string params
 *
 * Return: *n
 */

char *rot13(char *n)
{
	int count = 0, i;
	char alphabet[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rot13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	while (*(n + count) != '\0')
	{
		for (i = 0; i < 52; i++)
		{
			if (*(n + count) == alphabet[i])
			{
				*(n + count) = rot13[i];
				break;
			}
		}
		count++;
	}

	return (n);
}
