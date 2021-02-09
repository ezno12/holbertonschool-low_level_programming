#include "holberton.h"
/**
* main - print alphabet
*
* Return:0  (sucess)
*/
int main(void)
{
int i, arra[10] = {'H', 'o', 'l', 'b', 'e', 'r', 't', 'o', 'n'};
i = 0;
for (i = 0; i <= 9; ++i)
{
_putchar(arra[i]);
}
_putchar('\n');
return (0);
}
