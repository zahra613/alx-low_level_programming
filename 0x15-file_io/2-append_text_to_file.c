#include "main.h"
/**
 * append_text_to_file - function that appends text at the end of a file.
 *@filename : file name
 *@text_content : text to write
 * Return: 1 or -1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int len = 0;
	int file, bytes_to_write;

	if (filename == NULL)
	{
		return (-1);
	}

	file = open(filename,  O_APPEND | O_WRONLY);
	if (file == -1)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		while (*(text_content + len) != '\0')
		{
			len++;
		}

		bytes_to_write = write(file, text_content, len);
		if (bytes_to_write == -1)
		{
			close(file);
			return (-1);
		}
	}
	close(file);
	return (1);
}
