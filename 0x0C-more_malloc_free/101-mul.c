#include "main.h"
#define ERR_MSG "Error"
/**
 * _isdigit - checks if digits are 0 to 9
 * @c: char to be checked
 * Return: 1 if c is a digit, 0 otherwise
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
/**
 * _strlen - returns the length of a string
 * @s: string
 * Return: String length
 */
int _strlen(char *s)
{
	int longi = 0;

	while (s[longi] != '\0')
	{
		longi++;
	}
	return (longi);
}
/**
 * errors - controls errors for main
 */
void errors(void)
{
	printf("Error\n");
	exit(98);
}
/**
 * main - multiplies two positive numbers
 * @argc: argument count
 * @argv: array containing arguments
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	char *s1, *s2;
	int b, c, d, i, f, num1, num2, *result, a = 0;

	s1 = argv[1], s2 = argv[2];
	if (argc != 3 || !is_digit(s1) || !is_digit(s2))
		errors();
	b = _strlen(s1);
	c = _strlen(s2);
	d = b + c + 1;
	result = malloc(sizeof(int) * d);
	if (!result)
		return (1);
	for (i = 0; i <= b + c; i++)
		result[i] = 0;
	for (b = b - 1; b >= 0; b--)
	{
		num1 = s1[b] - '0';
		carry = 0;
		for (c = _strlen(c) - 1; c >= 0; c--)
		{
			num2 = s2[c] - '0';
			f += result[b + c + 1] + (num1 * num2);
			result[b + c + 1] = f % 10;
			f /= 10;
		}
		if (f > 0)
			result[b + c + 1] += f;
	}
	for (i = 0; i < d - 1; i++)
	{
		if (result[i])
			a = 1;
		if (a)
			_putchar(result[i] + '0');
	}
	if (!a)
		_putchar('0');
	_putchar("\n");
	free(result);
	return (0);
}
