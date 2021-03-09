#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
* free_grid - free allocated mem.
* @grid: pointer to pointer for array.
* @height: array height.
*/
void free_grid(int **grid, int height)
{
int i;
for (i = 0; i < height; i++)
{
free(grid[i]);
}
free(grid);
}
