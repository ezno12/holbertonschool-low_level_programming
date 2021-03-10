#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - search for int
 * @array: integer pionter
 * @size: integer
 * @cmp: pionter to function.
 *
 * Return: int (success).
 */
int int_index(int *array, int size, int (*cmp)(int))
{
int i, num;
if (size <= 0)
return (-1);
if (size && cmp != NULL && array != NULL)
{
for (i = 0; i <= size; i++)
{
num = cmp(array[i]);
if (num != 0)
return (i);
}
}
return (-1);
}
