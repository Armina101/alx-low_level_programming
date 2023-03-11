#include <stdio.h>
#include "main.h"
#include <ctype.h>

/**
 * main - adds positive numbers
 * @argc: array count
 * @argv: array arguments
 * Return: Always 0 (Success)
 */
int main(int argc, char **argv)
{
	int i = 1, sum = 0;

	while (i < argc)
	{
		if (isdigit(argv[i]) == 0)
		{
			printf("Error\n");

			return (0);
		}

		sum = sum + _atoi(argv[i]);
		i++;
	}

	printf("%d\n", sum);

	return (0);
}
