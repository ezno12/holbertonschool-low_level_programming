#include "holberton.h"
/**
* get_bit - return bit value.
*
* Return: Always 0.
*/
int get_bit(unsigned long int n, unsigned int index)
{
unsigned int value;
if (index > sizeof(n) * 8 - 1)
return (-1);
value = (n >> index) & 1;
if (value != 0 && value != 1)
return (-1);
return (value);
}
