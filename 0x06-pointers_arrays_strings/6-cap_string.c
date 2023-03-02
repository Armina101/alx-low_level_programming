#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @n: string
 *
 * Return: pointer to dest
 */

char *cap_string(char *n)
{
	int a = 0, i;
	int sep_words[] = {32, 9, 10, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};

	if (*(n + a) >= 97 && *(n + a) <= 122)
		*(n + a) = *(n + a) - 32;
	a++;
	while (*(n + a) != '\0')
	{
		for (i = 0; i < 13; i++)
		{
			if (*(n + a) == sep_words[i])
			{
				if ((*(n + (a + 1)) >= 97) && (*(n + (a + 1)) <= 122))
					*(n + (a + 1)) = *(n + (a + 1)) - 32;
				break;
			}
		}
		a++;
	}
	return (n);
}
