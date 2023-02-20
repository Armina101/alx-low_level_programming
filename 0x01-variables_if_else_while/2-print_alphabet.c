#include <stdio.h>

/**
 * main - Prints the alphabets.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ch[26] = "abcdefghijklmnopqrstuvwxyz";
	int n;

	for (n = 0; n < 26; n++)
	{
		putchar(ch[n]);
	}
	putchar('\n');
	return (0);
}
