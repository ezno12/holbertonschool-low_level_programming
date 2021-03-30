#include "holberton.h"
/**
* create_file - create file.
* @filename: name of file.
* @text_content: NULL terminated string.
* Return: 1 on success, -1 on failure.
*/
int create_file(const char *filename, char *text_content)
{
int fd;
int counter;
int write_ret;
if (filename == NULL)
return (-1);
fd = open(filename, O_CREAT | O_TRUNC | O_WRONLY, 0600);
if (fd == -1)
return (-1);
if (text_content == NULL)
text_content = "";
for (counter = 0; text_content[counter] != '\0'; counter++)
;
write_ret = write(fd, text_content, counter);
if (write_ret == -1)
return (-1);
close(fd);
return (1);
}
