#include "holberton.h"

/**
 * flip_bits - returns the number of bits you would need to flip to get from
 * one number to another
 * @n: initial number
 * @m: number to change to
 * Return: number of bits needed to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned int i;
int size;
size = sizeof(unsigned long int) * 8;
i = 0;
while (size != 0)
{
if ((n & 1) != (m & 1))
i++;
n = n >> 1;
m = m >> 1;
size--;
}
return (i);
}
