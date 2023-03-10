#include <stdio.h>
#include "main.h"

/**
 * main - multiplies two numbers
 * @argc: argument count
 * @argv: array
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv)
{
	int i = argc - 1;

	if (i != 2)
	{
		printf("Error\n");

		return (1);
	}

	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));

	return (0);
}
