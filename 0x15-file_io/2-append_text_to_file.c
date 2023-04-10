#include "main.h"
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: name of the file
 * @text_content: NULL terminated string to add at the end of the file
 * Return: 1 on success and -1 on failure
 * If filename is NULL return -1
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int file_desc, n, file_write;

	n = 0;

	if (filename == NULL)
		return (-1);

	file_desc = open(filename, O_WRONLY | O_APPEND);

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
