#include "holberton"
/**
* more_numbers : print number sans2 & 4
*
* Retrun: void.
*/
void more_numbers(void)
{
int c, n;
for (n = 0; n <= 10; n++)
{
for (c = 0; c <= 14; ++c)
{
if ( c > 9)
{
_putchar(c / 10 + '0');
}
_putchar(c % 10 + '0');
}
_putchar('\n');
}
}
