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
int i = 0;
int j;
while (src[i] != '\0')
{
i++;
}
j = 0;
while (j <= i)
{
dest[j] = src[j];
j++;
}
return (dest);
}
