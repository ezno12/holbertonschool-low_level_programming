#include "holberton.h"
/**
* _memcpy - copy memory erea
*
*@dest: char pionter
*@src: char pionter
*@n: intger
*
* Return: dest (success)
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
char *d = dest;
const char *s = src;
while (n--)
{
*d++ = *s++;
}
return (dest);
}
