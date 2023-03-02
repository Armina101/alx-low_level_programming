#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @n: string
 *
 * Return: pointer to dest
 */

char *cap_string(char *n)
{
	int f, i = 0;
	int sep[] = {32, 9, 10, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};

	while (n[i])
	{
		while (!(n[i] >= 'a' && n[i] <= 'z'))
		{
			i++;

			for (f = 0; f < 13; f++)
			{
				if (n[i] == sep[f])
				{
					i++;
				}
			}
		}
	}

	return (n);
}
