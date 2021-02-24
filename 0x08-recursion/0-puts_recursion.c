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
if (*s)
{
_putchar(*s);
_puts_recursion(s + 1);
}
else
{
_putchar('\n');
}
}
