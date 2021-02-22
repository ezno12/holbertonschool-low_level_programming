#include "holberton.h"
/**
*_strspn - get length of a prefix substring.
*
*@s: char pionter.
*@accept: char pionter.
*
* Return: leng or 0 (success).
*/
unsigned int _strspn(char *s, char *accept)
{
int n;
while (*s)
{
for (n = 0; accept[n]; n++)
{
if (*s == accept[n])
{
return (n);
}
}
s++;
}
return ('\0');
}
