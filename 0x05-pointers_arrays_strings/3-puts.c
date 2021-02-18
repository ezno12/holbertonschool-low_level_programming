#include "holberton.h"
/**
* _puts - print string
*
*@str: pionter
*
* Return: Void
*/
void _puts(char *str)
{
int c ;
for ( c = 0; str[i] != '\0'; ++c)
{
_putchar(str[c]);
}
_putchar('\n');
return;
}
