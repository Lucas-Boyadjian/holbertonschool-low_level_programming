#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

#define BUFFER_SIZE 1024

/**
 * error_handler - Handles error messages and exits with appropriate code
 * @error_code: Error code to determine the message and exit status
 * @filename: Name of the file related to the error
 * @fd_from: File descriptor for source file
 * @fd_to: File descriptor for destination file
 */
void error_handler(int error_code, char *filename, int fd_from, int fd_to)
{
	switch (error_code)
	{
	case 97:
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	case 98:
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filename);
		exit(98);
	case 99:
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename);
		if (fd_from != -1)
			close(fd_from);
		if (fd_to != -1)
			close(fd_to);
		exit(99);
	case 100:
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_from);
		exit(100);
	default:
		break;
	}
}

/**
 * copy_file - Copies content from one file to another
 * @file_from: Source file name
 * @file_to: Destination file name
 */
void copy_file(char *file_from, char *file_to)
{
	int fd_from, fd_to, close_status;
	ssize_t bytes_read, bytes_written;
	char buffer[BUFFER_SIZE];

	fd_from = open(file_from, O_RDONLY);
	if (fd_from == -1)
		error_handler(98, file_from, -1, -1);

	fd_to = open(file_to, O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fd_to == -1)
		error_handler(99, file_to, fd_from, -1);

	while ((bytes_read = read(fd_from, buffer, BUFFER_SIZE)) > 0)
	{
		bytes_written = write(fd_to, buffer, bytes_read);
		if (bytes_written == -1 || bytes_written != bytes_read)
			error_handler(99, file_to, fd_from, fd_to);
	}

	if (bytes_read == -1)
		error_handler(98, file_from, fd_from, fd_to);

	close_status = close(fd_from);
	if (close_status == -1)
		error_handler(100, NULL, fd_from, fd_to);

	close_status = close(fd_to);
	if (close_status == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_to);
		exit(100);
	}
}

/**
 * main - Copies the content of a file to another file
 * @argc: Number of arguments
 * @argv: Array of argument strings
 *
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
		error_handler(97, NULL, -1, -1);

	copy_file(argv[1], argv[2]);

	return (0);
}
