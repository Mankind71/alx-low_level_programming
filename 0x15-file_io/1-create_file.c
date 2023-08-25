#include "main.h"

/**
 * create_file - creates a file
 *
 * @filename: name of the file to create
 * @text_content: NULL terminated string to write to file
 *
 * Return: 1 on success, -1 on fail
 */

int create_file(const char *filename, char *text_content)
{
	int fd, txt_len;
	ssize_t bytes_written;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		for (txt_len = 0; text_content[txt_len];)
			txt_len++;
	}
	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);

	if (fd == -1)
	{
		return (-1);
	}
	bytes_written = write(fd, text_content, txt_len);

	if (bytes_written == -1)
	{
		return (-1);
	}
	close(fd);
	return (1);
}
