#include "holberton.h"
/**
* _puts_recursion - output of characters and strings.
*
*@s: pionter to string.
*
* Return: void.
*/
void _puts_recursion(char *s)
{
int i = 0;
while (s[i] != '\0')
{
if (s[i] == '\0')
{
return;
}
else
{
_putchar(*s);
_puts_recursion(s);
}
++i;
}
_putchar('\n');
}
