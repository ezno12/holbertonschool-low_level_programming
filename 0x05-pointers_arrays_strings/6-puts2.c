#include "holberton.h"
/**
* puts2 - function print pair int
*
*@str: - pionter
*
* Return Viod (sucess)
*/
void puts2(char *str)
{
while (*str != '\0')
{
if (*str % 2 == 0)
_putchar(*str);
}
}
