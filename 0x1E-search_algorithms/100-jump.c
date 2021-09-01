#include "search_algos.h"

/**
 * jump_search - function that searches for a value in a sorted array of int.
 *
 *  @array: array of elements.
 *  @size: size of the array.
 *  @value: the element to search for.
 *
 * Return: Always EXIT_SUCCESS
 */
int jump_search(int *array, size_t size, int value)
{
size_t i = 0;
size_t m = sqrt(size); /* initializing block size= √(n) */

if (array == NULL)
{
return (-1);
}
do
{
/* the control will continue to jump the blocks */ 
printf("Value checked array[%zu] = [%d]\n", i, array[i]);
i += m;
if (i >= size)
break;
} while (array[i] < value);
printf("Value found between indexes [%zu] and [%zu]\n", i - m, i);
i -= m;
while (array[i] < value)
{
printf("Value checked array[%zu] = [%d]\n", i, array[i]);
++i;
if (i == size)
return (-1);
}
if (array[i] == value)
{
printf("Value checked array[%zu] = [%d]\n", i, array[i]);
return (i);
}
return (-1);
}
