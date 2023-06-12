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
		error_exit(100, "Can't close fd");
}
/**
 * main - check the code
 *@argc: integer represents the arguments
 *@argv: string contains arguments
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int fd_to, fd_from;
	const char *file_from;
	const char *file_to;
	char buffer[4096];
	ssize_t bytes_read, bytes_written;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		return (97);
	}
	file_from = argv[1];
	file_to = argv[2];
	fd_from = open(file_from, O_RDONLY);
	if (fd_from == -1)
		error_exit(98, file_from);
	fd_to = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, 0666);
	if (fd_to == -1)
	{
		close_file(fd_from);
		error_exit(99, file_to);
	}
	while ((bytes_read = read(fd_from, buffer, sizeof(buffer))) > 0)
	{
		bytes_written = write(fd_to, buffer, bytes_read);
		if (bytes_written == -1)
		{
			close_file(fd_from);
			close_file(fd_to);
			error_exit(99, file_to);
		}
	}

	close_file(fd_from);
	close_file(fd_to);

	return (0);
}
