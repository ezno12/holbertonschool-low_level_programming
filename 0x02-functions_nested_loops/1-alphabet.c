#include "holberton.h"
/**
* print_alphabet - function to print alphabet in lowercase.
*
* Return:0  (sucess)
*/
void print_alphabet(void)
{
char c;

for (c = 'a'; c <= 'z'; ++c)
{
_putchar(c);
}
_putchar('\n');
}
