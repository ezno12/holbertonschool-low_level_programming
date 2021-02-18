#include "holberton.h"
/**
 * swap_int - change the value of integer using pointer
 *
 * @a: pointer
 * @b: pionter
 *
 * Return:void
 */
void swap_int(int *a, int *b)
{
int c;
c = *a;
*a = *b;
*b = c;
}
