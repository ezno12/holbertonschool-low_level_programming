#include "holberton.h"
#include <stdlib.h>

/**
 * alloc_grid - creates a 2D array of integers.
 * @width: int
 * @height:int
 *
 * Return: a double pointer to the 2D array
 */
int **alloc_grid(int width, int height)
{
int i, j;
int **x;
if (width <= 0 || height <= 0)
return (NULL);
x = (int **)malloc(sizeof(int *) * height);
if (x == NULL)
return (NULL);
for (i = 0; i < height; i++)
{
x[i] = (int *)malloc(sizeof(int) * width);
if (x[i] == NULL)
{
for (j = 0; j < i; j++)
free(x[j]);
free(x);
return (NULL);
}
for (j = 0; j < width; j++)
{
x[i][j] = 0;
}
}
return (x);
}
