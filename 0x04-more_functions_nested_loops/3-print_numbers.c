#include "holberton.h"
/**
* print_numbers - display all number from 0 to 9 followed by new line.
*
*Return: void
*/
void print_numbers(void)
{
int c;
for (c = 48; c <= 57; c++)
{
_putchar(c);
}
_putchar('\n');
}
