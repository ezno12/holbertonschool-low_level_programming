#include "holberton.h"
/**
* print_binary - print binary of int.
*
* @n: int
*
* Return: void (success).
*/
void print_binary(unsigned long int n)
{
if (n > 1)
print_binary(n >> 1);
_putchar((n & 1) + '0');
}

