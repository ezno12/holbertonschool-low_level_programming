#include "holberton.h"
/**
 * print_array - print array value in order.
 *@a : pointer.
 *@n : integer
 * Return: void (sucess).
 */
void print_array(int *a, int n)
{
int i;
for (i = 0; i < n ; i++)
{
printf("%d", a[i]);
if (i < (n-1))
{
printf(", ");
}
}
printf("\n");
}
