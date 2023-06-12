#include "main.h"
/**
 * read_textfile - function that reads a text file
 *@filename : it's the name of the file
 * @letters : letter to be printed
 * Return: number of letter
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file;
	size_t bytes_to_read;
	size_t bytes_to_write;
	char *buffer = malloc(sizeof(char) * (letters));

	if (filename == NULL)
	{
		return (0);
	}
	file = open(filename, O_RDONLY);
	if (file == -1)
	{
		return (0);
	}

	if (buffer == NULL)
	{
		free(buffer);
		close(file);
		return (0);
	}
	bytes_to_read = read(file, buffer, letters);
	if (bytes_to_read != letters)
	{
		free(buffer);
		close(file);
		return (0);
	}
	bytes_to_write = write(STDOUT_FILENO, buffer, bytes_to_read);
	free(buffer);
	if (bytes_to_write != bytes_to_read)
	{
		return (0);
	}
	return (bytes_to_write);

}

