#include "main.h"

/**
 * _isalpha - checking for char alphabet
 * @c: char to be checked
 *
 * Return: 1 if char is lower or upper else 0 otherwise
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && <= 'Z'))
		return (1);
	else
		return (0);
}
