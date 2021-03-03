#include "holberton.h"
#include <stdlib.h>
/**
 * create_array - allocate space
 * @size:unssigned intiger
 * @c:character
 * Return:character
 */
char *create_array(unsigned int size, char c)
{
unsigned int i;
char *ar;
if (size == 0)
return (NULL);
ar = malloc(size * sizeof(char));
if (ar == NULL)
{
return (NULL);
}
for (i = 0; i < size; i++)
{
ar[i] = c;
}
return (ar);
}
