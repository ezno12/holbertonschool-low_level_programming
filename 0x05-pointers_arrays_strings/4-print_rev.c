
#include "holberton.h"
/**
* print_rev - prints string in reverse.
* @s: pionter.
* Return: void.
*/
void print_rev(char *s)
{
char *c;
c = s;
while (*s != '\0')
{
s++;
}
while (s != c)
{
s--;
_putchar(*s);
}
_putchar('\n');
}
