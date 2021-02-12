#include "holberton"
/**
* print_most_numbers - print number sans2 & 4
*
* Retrun: void.
*/
void print_most_numbers(void)
{
char c;
for (c = 48; c <= 57; ++c)
{
if ( c != 50 && c != 52)
_putchar(c);
}
_putchar('\n');
}
