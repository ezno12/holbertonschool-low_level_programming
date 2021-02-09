#include "holberton.h"
/**
* print_alphabet_x10 - print 10xalphabet.
*
* Return: no return.
*/
void print_alphabet_x10(void)
{
char c;
int i;

for (i = 1; i <= 10; ++c)
{
for (c = 'a'; c <= 'z'; ++c)
{
_putchar(c);
}
_putchar('\n');
}
}
