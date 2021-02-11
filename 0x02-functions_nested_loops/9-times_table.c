#include "holberton.h"
/**
*times_table - 9*
*
*Return: not this time :)
*/
void times_table(void)
{
int x, y;

for (x = 0; x <= 9; ++x)
{
for (y = 0; y <= 9; ++y)
{
if (x * y > 9)
{
if (y != 0)
{
_putchar(',');
_putchar(' ');
}
_putchar((x * y) / 10 + '0');
_putchar((x * y) % 10 + '0');
}
else
{
if (y != 0)
{
_putchar(',');
_putchar(' ');
_putchar(' ');
}
_putchar((x * y) + '0');
}
}
_putchar('\n');
}
}
