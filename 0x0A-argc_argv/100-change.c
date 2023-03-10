#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - prints the minimum number of coins,
 * to make change for an amount of money
 * @argc: Array count
 * @argv: Array arguments
 * Return: 0 and 1
 */
int main(int argc, char *argv)
{
	int a, b, result;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");

		return (1);
	}

	a = atoi(argv[1]);

	result = 0;

	if (a < 0)
	{
		printf("0\n");

		return (0);
	}

	for (b = 0; b < 5 &&  >= 0; b++)
	{
		while (a >= coins[b])
		{
			result++;
			num = coins[b];
		}
	}

	printf("%d\n", result);

	return (0);
}
