#include "main.h"
/**
 * error_exit - function that prints an error message
 *@code: exit code
 *@message: error msg
 * Return: -
 */
void error_exit(int code, const char *message)
{
	dprintf(STDERR_FILENO, "Error: %s\n", message);
	exit(code);
}
/**
 * close_file - function that closes a file descriptor
 *@fd: file descriptor
 * Return: -
 */
void close_file(int fd)
{
	if (close(fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - check the code
 *@argv : string contains arguments
 *@argc : integer represents number of arguments
 * Return: depend
 */
int main(int argc, char *argv[])
{
	int file_to, file_from;
	char buffer[4096];
	ssize_t bytes_read, bytes_written;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	file_from = open(argv[1], O_RDONLY);
	if (file_from < 0)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
	exit(98);
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (file_to < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		close_file(file_from);
		exit(98);
	}
	while ((bytes_read = read(file_from, buffer, sizeof(buffer))) > 0)
	{
		bytes_written = write(file_to, buffer, bytes_read);
		if (bytes_written != bytes_read)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			close_file(file_from);
			close_file(file_to);
			exit(99);
		}
	}
	if (bytes_read < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (close(file_from) == -1 || close(file_to) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd\n");
		exit(100);
	}
	return (0);
}
