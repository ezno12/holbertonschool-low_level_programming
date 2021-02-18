#include "holberton.h"
/**
* puts_half - function print the second half of string
*
*@str: pionter
*
*viod (sucess)
*/
void puts_half(char *str)
{
int c = 0;
int i;
while (*str[c] != '\0')
{
c++;
}
i = c;
c = i / 2;
if (i % 2 == 0)
{
while (c < i)
{
_putchar(str[c]);
c++;
}
}
else
{
c += 1;
while ( c < i)
{
_putchar(str[c]);
c++;
}
}
_putchar('\n');
}
