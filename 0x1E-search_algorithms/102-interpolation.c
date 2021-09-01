#include "search_algos.h"

/**
 * interpolation_search - searches for a value in a sorted array of int.
 *
 *  @array: array of elements.
 *  @size: size of the array.
 *  @value: the element to search for.
 *
 * Return: Always EXIT_SUCCESS
 */
int interpolation_search(int *array, size_t size, int value)
{
int low = 0;
int high = size - 1;
size_t pos;

if (array == NULL)
{
return (-1);
}
while ((array[high] != array[low]) && (value >= array[low])
&& (value <= array[high]))
{
pos = low + (((double)(high - low) / (array[high] - array[low]))
* (value - array[low]));
printf("Value checked array[%lu] = [%d]\n", pos, array[pos]);
if (array[pos] < value)
low = pos + 1;
else if (value < array[pos])
high = pos - 1;
else
return (pos);
}
if (value == array[low])
{
return (low);
}
printf("Value checked array[%d] is out of range\n", high);
return (-1);
}
