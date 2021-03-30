#include "holberton.h"
/**
* append_text_to_file - appends text to the end of a file
* @filename: name of file
* @text_content: NULL terminated string to add at the end of file
* Return: 1 on success, -1 on failure
*/
int append_text_to_file(const char *filename, char *text_content)
{
int i, rw, len = 0;
if (filename == NULL)
return (-1);
i = open(filename, O_WRONLY | O_APPEND);
if (i < 0)
return (-1);
if (text_content != NULL)
{
while (text_content[len])
len++;
rw = write(i, text_content, len);
if (rw < 0)
return (-1);
}
close(i);
return (1);
}
