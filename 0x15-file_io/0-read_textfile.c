#include "holberton.h"
/**
* read_textfile - reads text file.
* @filename: file.
* @letters: number letters.
* Return: number of letters.
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
int fd;
char *buffer;
int bytes;
if (filename == NULL || letters == 0)
return (0);
fd = open(filename, O_RDONLY);
if (fd == -1)
return (0);
buffer = malloc(sizeof(char) * letters);
bytes = read(fd, buffer, letters);
if (bytes == -1)
return (0);
write(STDOUT_FILENO, buffer, bytes);
close(fd);
free(buffer);
return (bytes);
}
