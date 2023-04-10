#include "main.h"
#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: name of the file
 * @letters: number of letters it should read and print
 * Return: actual number of letters it could read and print
 * if the file can not be opened or read, return 0
 * if filename is NULL return 0
 * if write fails or does not write the expected amount of bytes, return 0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t file_read, file_write, file_desc;
	char *buff;

	buff = malloc(sizeof(char) * letters);

	if (!buff)
		return (0);

	file_desc = open(filename, 0_RDONLY);
	file_read = read(file_desc, buff, letters);
	file_write = write(STDOUT_FILENO, buff, file_read);

	if (file_desc < 0 || !filename)
		return (0);

	if (file_read < 0)
		return (0);
	buff[file_read] = '\0';
	close(file_desc);

	if (file_write < 1)
		return (0);
	free(buff);

	return (file_write);
}
