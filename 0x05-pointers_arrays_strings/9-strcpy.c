#include "holberton.h"
#include <stdio.h>
/**
* *_strcpy - function copy string.
*@dest : pionter
*@src : other pionter
* Return: Always 0.
*/
char *_strcpy(char *dest, char *src)
{
int i;
int j;
while (dest[i] != '\0')
{
i++;
while ((dest[i++] = src[j++]) != '\0')
{
}
}
return (dest);
}
