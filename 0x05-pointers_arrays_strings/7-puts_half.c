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
for (i = c ; i < c / 2; --i)
{
_putchar(*str[i]);
}
}
