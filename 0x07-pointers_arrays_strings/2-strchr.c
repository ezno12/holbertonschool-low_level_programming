#include "holberton.h"
/**
*_strchr - locate character in string.
*
* @s : pionter.
* @c : char.
*
* Return:pointer to char* (success).
*/
char *_strchr(char *s, char c)
{
do {
if (*s == c)
{
return ((char *)s);
}
} while (*s++);
return (0);
}
