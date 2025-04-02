#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include "main.h"

/**
 * read_textfile - Reads a text file and prints it
 * to the POSIX standard output.
 *
 * @filename: The name of the file to read.
 * @letters: The number of letters to read and print.
 *
 * Return: The actual number of letters it could read and print,
 *         or 0 if the file cannot be opened or read, if filename is NULL,
 *         or if write fails or does not write the expected amount of bytes.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
int descripteur_f;
char *buffer;
ssize_t bytes_read;
ssize_t bytes_written;

	if (filename == NULL)
		return (0);

	descripteur_f = open(filename, O_RDONLY);
	if (descripteur_f == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		close(descripteur_f);
		return (0);
	}

	bytes_read = read(descripteur_f, buffer, letters);
	if (bytes_read == -1)
	{
		free(buffer);
		close(descripteur_f);
		return (0);
	}

	bytes_written = write(STDOUT_FILENO, buffer, bytes_read);

	free(buffer);
	close(descripteur_f);

	if (bytes_written == -1 || bytes_written != bytes_read)
		return (0);

	return (bytes_read);
}
