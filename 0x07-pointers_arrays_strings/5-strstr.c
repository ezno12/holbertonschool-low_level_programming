#include "holberton.h"
/**
*_strstr - locate a substring.
*
*@haystack: char pionter.
*@needle: char pionter.
*
*Return: substrig.
*/
char *_strstr(char *haystack, char *needle)
{
int i, j;
for (i = 0; haystack[i]; i++)
{
j = 0;
while (needle[j] && haystack[i + j] == needle[j])
j++;
if (!needle[j])
return (haystack + i);
}
return (0);
}
