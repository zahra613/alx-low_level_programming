#include "main.h"
/**
 * main - check the code
 *@argc : integer represent number of arguments
 *@argv : string contains arguments
 * Return: depend
 */
int main(int argc, char *argv[])
{
	int f_rd, f_wr;
	char buffer[BUFSIZ];
	ssize_t bytes_read, bytes_written;

	if (argc != 3)
	{
		printf("Usage: cp file_from file_to\n"), exit(97);
	}
	f_rd = open(argv[1], O_RDONLY);
	if (f_rd < 0)
	{
		printf("Error: Can't read from file %s\n", argv[1]), exit(98);
	}
	f_wr = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (f_wr < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		close(f_rd), exit(99);
	}
	while ((bytes_read = read(f_rd, buffer, BUFSIZ)) > 0)
	{
		bytes_written = write(f_wr, buffer, bytes_read);
		if (bytes_written != bytes_read)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			close(f_rd), exit(99);
		}
	}
	if (bytes_read < 0)
	{
		printf("Error: Can't read from file %s\n", argv[1]), exit(98);
	}
	if (close(f_rd) < 0 || close(f_wr) < 0)
	{
		if (close(f_rd) < 0)
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", f_rd);
		if (close(f_wr) < 0)
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", f_wr), exit(100);
	}
	return (0);
}
