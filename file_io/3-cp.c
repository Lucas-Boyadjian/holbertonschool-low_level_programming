#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <sys/types.h>

#define BUFFER_SIZE 1024

/**
 * error_file - Handles file errors and exits with appropriate code
 * @file_from: File descriptor for source file
 * @file_to: File descriptor for destination file
 * @argv: Array of arguments
 * @error_code: Type of error
 */
void error_file(int file_from, int file_to, char *argv[], int error_code)
{
	if (error_code == 98)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		if (file_from != -1)
			close(file_from);
		exit(98);
	}
	else if (error_code == 99)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		if (file_from != -1)
			close(fd_from);
		if (file_to != -1)
			close(file_to);
		exit(99);
	}
	else if (error_code == 100)
	{
		if (file_to == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		else
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_to);
		exit(100);
	}
}

/**
 * close_files - Handles closing files and checking for errors
 * @file_from: File descriptor for source file
 * @file_to: File descriptor for destination file
 */
void close_files(int file_from, int file_to)
{
	int close_status;

	close_status = close(file_from);
	if (close_status == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		exit(100);
	}

	close_status = close(file_to);
	if (close_status == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_to);
		exit(100);
	}
}

/**
 * main - Copies the content of a file to another file
 * @argc: Number of arguments
 * @argv: Array of arguments
 * Return: 0 on success, or exit with error code
 */
int main(int argc, char *argv[])
{
	int file_from, file_to;
	ssize_t bytes_read, bytes_written;
	char buffer[BUFFER_SIZE];


	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	file_from = open(argv[1], O_RDONLY);
	if (file_from == -1)
		error_file(file_from, -1, argv, 98);

	file_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (file_to == -1)
		error_file(file_from, file_to, argv, 99);


	while ((bytes_read = read(file_from, buffer, BUFFER_SIZE)) > 0)
	{
		bytes_written = write(file_to, buffer, bytes_read);
		if (bytes_written == -1 || bytes_written != bytes_read)
			error_file(file_from, file_to, argv, 99);
	}

	if (bytes_read == -1)
		error_file(file_from, file_to, argv, 98);

	close_files(file_from, file_to);

	return (0);
}
