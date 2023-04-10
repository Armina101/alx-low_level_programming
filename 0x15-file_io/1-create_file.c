#include "main.h"
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

/**
 * create_file - creates a file
 * @filename: name of the file to create
 * @text_content: NULL terminated string to write to the file
 * Return: 1 on success, -1 on failure
 * if filename is NULL return -1
 */

int create_file(const char *filename, char *text_content)
{
	int file_desc, n, file_write;

	n = 0;

	if (!filename)
		return (-1);

	file_desc = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);

	if (file_desc < 0)
		return (-1);
	if (!text_content)
		text_content = "";

	while (text_content[n])
		n++;

	file_write = write(file_desc, text_content, n);

	if (file_write < 0)
		return (-1);
	close(file_desc);
	return (1);
}
