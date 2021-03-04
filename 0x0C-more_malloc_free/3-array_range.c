#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 **array_range - fn  creates array of int.
 *@min : int
 *@max : int
 *Return: pointer to the array (sucess)
*/
int *array_range(int min, int max)
{
int i;
int j = 0;
int *ptr;
if (min > max)
return (NULL);
ptr = malloc(max - min + 1);
if (ptr == NULL)
return (NULL);
for (i = min; i < max + 1; i++)
{
ptr[j] = i;
j++;
}
return (ptr);
}
