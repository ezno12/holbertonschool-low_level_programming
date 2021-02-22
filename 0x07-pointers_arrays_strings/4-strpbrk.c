#include "holberton.h"
/**
* _strpbrk - search a string for any of a set of bytes.
*
*@s : char pionter
*@accept : char pionter
*
* Return: string (success).
*/
char *_strpbrk(char *s, char *accept)
{
char *r;
char c;
while ((c = *s++) != '\0')
for (r = accept; *r != '\0'; ++r)
if (*r == c)
return ((char *) s - 1);
return ('\0');
}
