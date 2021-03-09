#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
* argstostr - concatentes agr
*
*@ac: int
*@av: pionter to pionter char 
*/
char *argstostr(int ac, char **av)
{
int i = 0, j = 0, k = 0, l = 0;
char *ch;

if (ac == 0 || av == NULL)
return (NULL);
for (; i < ac; i++)
{
j = 0;
for (; av[i][j] != '\0'; j++)
k++;
}
ch = malloc(k + ac + 1 * sizeof(char));
if (ch == NULL)
return (NULL);
for (i = 0; i < ac; i++)
{
j = 0;
for (; av[i][j] != '\0'; j++)
{
ch[l] = av[i][j];
l++;
}
ch[l] = '\n';
l++;
}
return (ch);
}
