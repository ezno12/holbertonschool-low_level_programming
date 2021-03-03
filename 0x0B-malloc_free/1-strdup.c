
#include "holberton.h"
#include <stdlib.h>

/**
 * _strdup - Returns pntr to newly-allocated space memory
 *  with copy of the string.
 * @str:string pionter
 *
 * Return:char (success)
 */
char *_strdup(char *str)
{
char *c;
int i, j = 0;
if (str == NULL)
return (NULL);
for (i = 0; str[i]; i++)
j++;
c = malloc(sizeof(char) * (j + 1));
if (c == NULL)
return (NULL);
for (i = 0; str[i]; i++)
c[i] = str[i];
c[j] = '\0';
return (c);
}
