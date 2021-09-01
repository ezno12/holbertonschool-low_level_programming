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
size_t x;
size_t m = sqrt(size); /* initializing block size= √(n) */

if (array == NULL)
{
return (-1);
}
while (array[m] <= value && m < size)
{
/* the control will continue to jump the blocks */
i = m; /* shift the block */
m += sqrt(size);
printf("Value checked array [%i] = [%i]\n", i, m);
if (m > size - 1)
{
return (-1);
}
}
printf("Value found between indexes [%i] and [%i]\n", i, m);
for (x = i; x < m; x++)
{
/* linear search in current block */
if (array[x] == value)
{
printf("Value checked array [%zu] = [%zu]\n", i, m);
return (x); /* position of element being searched */
}
}
return (-1);
}
