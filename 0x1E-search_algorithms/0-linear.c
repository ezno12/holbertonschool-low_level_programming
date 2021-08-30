#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * linear_search - function that searches for a value in an array of integers.
 *
 *  @array: array of elements.
 *  @size: size of the array.
 *  @value: the element to search for.
 *
 * Return: Always EXIT_SUCCESS
 */
int linear_search(int *array, size_t size, int value)
{
unsigned int i;

if (array == NULL)
{
return (-1);
}
for (i = 0; i < size; i++)
{
printf("Value checked array[%i] = [%d]\n", i, array[i]);
getchar();
if (array[i] == value)
return (i);
}
return (-1);
}
