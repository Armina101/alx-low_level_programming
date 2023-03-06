#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @s: memory adress
 * @b: constant byte
 * @n: bytes of the memory
 * Return: the pointer to dest
 */

char *_memset(char *s, char b, unsigned int n)
{
	int a;

	for (a = 0; n > 0; a++)
	{
		s[a] = b;
		n--;
	}
	return (s);
}
