#include "main.h"

/**
 * print_alphabet_x10 - print the alphabets in lower case ten times
 * followed by a new line
 */

void print_alphabet_x10(void)
{
	int number;
	char ch;

	for (number = 0; number <= 9; number++)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
			_putchar(ch);
		_putchar('\n');
	}
}

