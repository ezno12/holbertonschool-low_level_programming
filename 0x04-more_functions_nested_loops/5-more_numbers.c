#include "holberton.h"
/**
* more_numbers - print 10x numb
*
*Return:void
*/
void more_numbers(void)
{
int i, j;
for (i = 0; i < 10; i++)
{
for (c = 0; c <= 14; c++)
{
if (c > 9)
{
_putchar(c / 10 + '0');
}
_putchar(c % 10 + '0');
}
_putchar('\n');
}
}
