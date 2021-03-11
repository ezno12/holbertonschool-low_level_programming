#include "variadic_functions.h"
#include <stdio.h>
/**
* print_numbers - print bumbers.
*
* @separator: pionter to char.
* @n: const int.
*
* Return: void.
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
unsigned int i = 0;
va_list list;
va_start(list, n);
while (i < n)
{
printf("%d", va_arg(list, unsigned int));
if (i != n - 1 && separator != NULL)
printf("%s", separator);
i++;
}
printf("\n");
va_end(list);
}
