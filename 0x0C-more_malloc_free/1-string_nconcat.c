#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
 **string_nconcat - concatenates two strings.
 *@s1 : pointer to string
 *@s2 : pointer to string
 *@n : int
 *Return: pointer to string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int x, y, i, j;
char *s;
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
for (x = 0; s1[x] != '\0'; x++)
;
for (y = 0; s2[y] != '\0'; y++)
;
if (n >= y)
n = y;
s = malloc(sizeof(char) * (x + n + 1));
if (s == NULL)
return (NULL);
for (i = 0; s1[i] != '\0'; i++)
s[i] = s1[i];
for (j = x; j < x + n; j++)
s[j] = s2[j - x];
s[j] = '\0';
return (s);
}
