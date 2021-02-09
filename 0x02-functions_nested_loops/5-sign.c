#include <holberton.h>
/**
* print_sign - define sign of int.
*
*@n: is input integer.
*
* Return:0  (sucess)
*/
int print_sign(int n)
{
if (n > 0)
_putchar('+');
return (1);
else if (n == 0)
_putchar('0');
return (0);
else if (n < 0)
_putchar('-');
return (-1);
_putchar('\n');
return (0);
}
