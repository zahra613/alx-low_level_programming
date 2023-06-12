#include "main.h"
/**
 * create_file -  function that creates a file.
 *@filename : it's the name of the file
 * @text_content : text to write in the file
 * Return: 1 or -1
 */
int create_file(const char *filename, char *text_content)
{
	int file;
	int len, bytes_to_write;
	len = 0;

	if (filename == NULL)
	{
		return (-1);
	}
	file = open(filename, O_CREAT | O_WRONLY  | O_TRUNC, 0600);

	if (file < 0)
	{
		return (0);
	}
	if (text_content == NULL)
	{
		close(file);
		return (1);
	}
	while (*(text_content + len) != '\0')
	{
		len++;
	}
	bytes_to_write = write(file, text_content, len);
	if (bytes_to_write < 0)
	{
		close(file);
		return (-1);
	}
	close(file);
	return (1);
}
