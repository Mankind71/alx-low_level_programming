#include "main.h"

/**
 * main - copies content of a file to another
 * 
 * @file_from: file to copy from
 * @file_to: file to copy to
*/

int main(int ac, char **av)
{
    int fd1, fd2, rdfd1, wrfd2;
	char *ch;
    int chsize = 1024;
    
    if (ac != 3)
    {
        dprintf(2, "Usage: cp %s %s\n", av[1], av[2]);
        exit(97);
    }
	fd1 = open(av[1], O_RDONLY);
    if (fd1 == -1)
    {
        dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
        exit(98);
    }
    ch = malloc(sizeof(char) * chsize);

	if (ch == NULL)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", av[2]);
		exit(99);
	}
    rdfd1 = read(fd1, ch, chsize);
    if (rdfd1 == -1)
    {
        dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
        exit(98);
    }
    if(close(fd1) == -1)
    {
        dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd1);
        exit(100);
    }    
    
	fd2 = open(av[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
    if (fd2 == -1)
    {
        dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
        exit(99);
    }
    wrfd2 = write(fd2, ch, rdfd1);
    if (wrfd2 == -1)
    {
        dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
        exit(99);
    }
    

    if(close(fd2) == -1)
    {
        dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd2);
        exit(100);
    }
    free(ch);
    return (1);
}