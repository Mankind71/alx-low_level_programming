#include "main.h"

/**
 * read_textfile - reads a text file and
 * prints it to the POSIX standard output
 *
 * @filename: text file that will be read
 * @letters: the number of letters it should read and print
 *
 * Return: actual number of letters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fd, rd, wr;
	char *ch;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	ch = malloc(sizeof(char) * letters);
	if (ch == NULL)
	{
		return (0);
	}

	rd = read(fd, ch, letters);
	if (rd == -1)
	{
		free(ch);
		return (0);
	}
	wr = write(STDOUT_FILENO, ch, rd);
	if (wr == -1)
	{
		free(ch);
		return (0);
	}
	close(fd);
	return (wr);
}
