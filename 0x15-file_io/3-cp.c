#include "main.h"

/**
 * close_file - Closes file descriptors.
 * @fd: The file descriptor
 */

void close_file(int fd)
{
	int c;

	c = close(fd);
	if (c == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * check_read - check read values.
 * @fd: The file descriptor
 * @val: av[1]
 */

void check_read(int fd, char *val)
{
	if (fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", val);
		exit(98);
	}
}

/**
 * main - copies content of a file to another
 *
 * @ac: args count
 * @av: args pointer
 *
 * Return: 1 on success
 */

int main(int ac, char **av)
{
	int fd1, fd2, rdfd1, wrfd2, chsize = 1024;
	char *ch;

	if (ac != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fd1 = open(av[1], O_RDONLY);
	ch = malloc(sizeof(char) * chsize);

	if (ch == NULL)
	{
		dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", av[2]);
		exit(99);
	}
	rdfd1 = read(fd1, ch, chsize);
	check_read(fd1, av[1]);
	check_read(rdfd1, av[1]);
	fd2 = open(av[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	while (rdfd1 > 0)
	{
		wrfd2 = write(fd2, ch, rdfd1);
		if (fd2 == -1 || wrfd2 == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
			free(ch);
			exit(99);
		}
		rdfd1 = read(fd1, ch, chsize);
		check_read(rdfd1, av[1]);
		fd2 = open(av[2], O_WRONLY | O_APPEND);
	}
	free(ch);
	close_file(fd1);
	close_file(fd2);
	return (0);
}
