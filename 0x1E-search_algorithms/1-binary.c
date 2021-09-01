#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * binary_search - function that searches for a value in a sorted array of int.
 *
 *  @array: array of elements.
 *  @size: size of the array.
 *  @value: the element to search for.
 *
 * Return: Always EXIT_SUCCESS
 */
int binary_search(int *array, size_t size, int value)
{
int first = 0;
int last = size - 1;
int mid;

if (array == NULL)
{
return (-1);
}
while (first <= last)
{
printf("Searching in array: ");
for (i = l; i <= r; ++i)
{
printf("%d", array[i]);
if (i < r)
printf(", ");
}
printf("\n");
mid = (first + last) / 2;
if (array[mid] < value)
{
first = mid + 1;
}
else if (array[mid] > value)
{
last = mid - 1;
}
else
{
return (mid);
}
}
return (-1);
}
