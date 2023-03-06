#include "main.h"

/**
 * print_chessboard - prints the chessboard
 * @a: pointer
 * Return: void
 */

void print_chessboard(char (*a)[8])
{
	unsigned int n, b = 0;

	for (n = 0; n < 64; n++)
	{
		if (n % 8 == 0 && n != 0)
		{
			b = n;
			_putchar('\n');
		}
		_putchar(a[n / 8][n - b]);
	}
	_putchar('\n');
}
