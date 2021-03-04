#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
*malloc_checked - function allocate memory
*
*@b: int
*
* Return:viod.
*/
void *malloc_checked(unsigned int b)
{
void *ptr;
ptr = malloc(b);
if (ptr == NULL)
{
exit(98);
}
return (ptr);
}
