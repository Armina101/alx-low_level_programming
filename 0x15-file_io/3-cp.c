#include "main.h"
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#define BUFSIZE 1024

/**
 * main - copies the content of a file to another file
 * @arg_count: number of arguments
 * @arg_v: arguments used
 * Return: Always 0 (Success)
 */

int main(int arg_count, char **arg_v)
{
	int file1, file2, file_read;
	char buf[1024];

	if (arg_count != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	file1 = open(arg_v[1], O_RDONLY);
	if (file1 < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", arg_v[1]);
		exit(98);
	}
	file2 = open(arg_v[2], O_CREAT | O_WRONLY |  O_TRUNC, 0664);
	while ((file_read = read(file1, buf, 1024)) > 0)
	{
		if (write(file2, buf, file_read) != file_read || file2 < 0)
		{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", arg_v[2]);
			exit(99);
		}
	}
	if (file_read < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", arg_v[1]);
		exit(98);
	}
	if (close(file1) < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file1);
		exit(100);
	}
	if (close(file2) < 0)
	{
		dprintf(STDERR_FILENO, ": Can't close fd %d\n", file2);
		exit(100);
	}
	return (0);
}
