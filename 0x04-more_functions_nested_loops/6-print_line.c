#include "holberton.h"
/**
*print_line : function to print line
*
*@n : intger
*
* Return : Void
*/
void print_line(int n)
{
n = 10;
int c;
if (n > 0)
{
for (c = 0; c < n ; c++ )
{
_putchar('_');
}
_putchar('\n');
}
else
{
_putchar('\n');
}
}
