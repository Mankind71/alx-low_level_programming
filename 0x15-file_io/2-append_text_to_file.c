#include "main.h"

/**
 * append_text_to_file - a function that appends text at the end of a file
 * 
 * @filename: name of file
 * @text_content: string to add to eof
 * 
 * Return: 1 on success, -1 on failure
*/

int append_text_to_file(const char *filename, char *text_content)
{
    int fd;

    if (filename == NULL)
        return (-1);
    
    fd = open(filename, O_APPEND);
    if (fd == -1)
        return (-1);

    if (text_content != NULL)
    {
        write(fd, text_content, 4);
    }
        
}
