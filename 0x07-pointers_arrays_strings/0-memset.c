#include "holberton.h"
/**
* _memset -function to fill memory with a constant byte
*
*@s: char pionter
*@b: char
*@n: unsigned int
*Return: s (success)
*/
char *_memset(char *s, char b, unsigned int n)
{
char *ptr =  s;
while (n-- > 0)
{
*ptr++ = b;
}
return (s);
}
