#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <sys/types.h>

#define BUFFER_SIZE 1024

/**
 * error_file - Handles file errors and exits with appropriate code
 * @fd_from: File descriptor for source file
 * @fd_to: File descriptor for destination file
 * @argv: Array of arguments
 * @error_code: Type of error
 */
void error_file(int fd_from, int fd_to, char *argv[], int error_code)
{
	if (error_code == 98)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		if (fd_from != -1)
			close(fd_from);
		exit(98);
	}
	else if (error_code == 99)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		if (fd_from != -1)
			close(fd_from);
		if (fd_to != -1)
			close(fd_to);
		exit(99);
	}
	else if (error_code == 100)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_from);
		exit(100);
	}
}

/**
 * close_files - Handles closing files and checking for errors
 * @fd_from: File descriptor for source file
 * @fd_to: File descriptor for destination file
 */
void close_files(int fd_from, int fd_to)
{
	int close_status;

	close_status = close(fd_from);
	if (close_status == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_from);
		exit(100);
	}

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
 * @argv: Array of arguments
 * Return: 0 on success, or exit with error code
 */
int main(int argc, char *argv[])
{
	int fd_from, fd_to;
	ssize_t bytes_read, bytes_written;
	char buffer[BUFFER_SIZE];


	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
		error_file(fd_from, -1, argv, 98);

	fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_to == -1)
		error_file(fd_from, fd_to, argv, 99);


	while ((bytes_read = read(fd_from, buffer, BUFFER_SIZE)) > 0)
	{
		bytes_written = write(fd_to, buffer, bytes_read);
		if (bytes_written == -1 || bytes_written != bytes_read)
			error_file(fd_from, fd_to, argv, 99);
	}

	if (bytes_read == -1)
		error_file(fd_from, fd_to, argv, 98);

	close_files(fd_from, fd_to);

	return (0);
}
