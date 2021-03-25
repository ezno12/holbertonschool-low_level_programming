#include "holberton.h"
/**
* set_bit - sef the value of bit to index.
*
* @n: int.
* @index: int.
*
* Return: int (success).
*/
int set_bit(unsigned long int *n, unsigned int index)
{
unsigned int y = 1;
if (sizeof(n) * 8 < index)
return (-1);
y <<= index;
*n = *n | y;
return (1);
}
