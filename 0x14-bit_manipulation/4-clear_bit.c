#include "holberton.h"
/**
* clear_bit - sets value to 0.
*
* @n: int.
* @index: int.
*
* Return: int (success).
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
int set;
if (index > sizeof(unsigned long int) * 8 - 1)
return (-1);
set = 1 << index;
*n = *n & ~set;
return (1);
}
