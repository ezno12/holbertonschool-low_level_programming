#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
* string_nconcat - concatenates tow strings
*
*@s1: string pionter
*@s2: string pionter
*@n: unigned int
*
* Return: char (success)
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *s
unsigned int i, j, x, y;
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
i = 0;
while (s1[length] != '\0')
{
++i;
}
j = 0;
while (s2[j] != '\0') {
j++
}
s = malloc(sizeof(char) * (i + n + 1));
if ( s == NULL)
return (NULL);
for (x = 0; s1[x] != '\0' ; x++)
s[i] = s1[i];
for ( y = i; y < i; y++)
s[y] = s2[y - i];
s[y] = '\0';
return (s);
}
