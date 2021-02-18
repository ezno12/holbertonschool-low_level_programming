#include "holberton.h"
/**
* print_rev - print a reversed string
* @s:pointer char
* return:void
*/
void print_rev(char *s)
{
int i, j, k;
char rev[];
for(i = 0; s[i] != '\0'; i++);
{
k = i-1;
}
for(j = 0; j <= i-1; j++)
{
rev[j] = s[k];
k--;
_putchar(rev[j]);
}
_putchar('\n');
return;
}
