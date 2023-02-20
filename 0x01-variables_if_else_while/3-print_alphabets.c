#include <stdio.h>

/**
 * main - Prints the alphabets.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char ch[52] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int n;

	for (n = 0; n < 52; n++)
	{
		putchar(ch[n]);
	}
	putchar('\n');
	return (0);
}
